#include "Dish.h"

Dish::Dish(std::string n, double p) : name(n), price(p) {}

double Dish::getPrice() const {
    return price;
}