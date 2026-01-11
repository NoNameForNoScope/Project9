#include "Canteen.h"
#include <stdexcept>

Canteen& Canteen::getInstance() {
    static Canteen instance;
    return instance;
}

void Canteen::addAvailableDish(const std::string& name) {
    availableDishes.push_back(name);
}

void Canteen::processOrder(std::unique_ptr<Order> order) {
    // to validate..
}
