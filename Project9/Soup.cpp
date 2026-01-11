#include "Soup.h"

Soup::Soup(std::string n, double p) : Dish(n, p) {}

void Soup::addSpice(const std::string& spice) {
    spices.push_back(spice);
}

std::string Soup::getName() const {
    return name;
}

std::unique_ptr<Dish> Soup::clone() const {
    return std::make_unique<Soup>(*this);
}
