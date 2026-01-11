#include <iostream>
#include <fstream>
#include "Soup.h"
#include "MainCourse.h"
#include "StudentOrder.h"
#include "Canteen.h"

int main() {
    auto soup = std::make_unique<Soup>("Ciorba de legume", 10);
    soup->addSpice("piper");

    auto main = std::make_unique<MainCourse>("Snitel", 25);
    main->addSideDish("piure");
    main->setDessert("papanasi");

    StudentOrder order(PaymentMethod::CARD, "barlad enterprise");

    order += { std::move(soup), 2 };
    order += { std::move(main), 1 };

    std::ofstream out("order.txt");
    order.save(out);
    out.close();

    auto cloned = order.clone();

    Canteen::getInstance().addAvailableDish("ciorba de legume");
    Canteen::getInstance().addAvailableDish("snitel");

    Canteen::getInstance().processOrder(std::move(cloned));

    return 0;
}