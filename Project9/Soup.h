#pragma once
#include "Dish.h"

class Soup : public Dish {
    std::vector<std::string> spices;

public:
    Soup(std::string n, double p);
    void addSpice(const std::string& spice);
    std::string getName() const override;
    std::unique_ptr<Dish> clone() const override;
};
