#include "MainCourse.h"

MainCourse::MainCourse(std::string n, double p) : Dish(n, p) {}

void MainCourse::addSideDish(const std::string& side) {
    sideDishes.push_back(side);
}

void MainCourse::setDessert(const std::string& d) {
    dessert = d;
}

std::string MainCourse::getName() const {
    return name;
}

std::unique_ptr<Dish> MainCourse::clone() const {
    return std::make_unique<MainCourse>(*this);
}
