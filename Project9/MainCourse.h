#pragma once
#include "Dish.h"

class MainCourse : public Dish {
    std::vector<std::string> sideDishes;
    std::string dessert;

public:
    MainCourse(std::string n, double p);
    void addSideDish(const std::string& side);
    void setDessert(const std::string& d);
    std::string getName() const override;
    std::unique_ptr<Dish> clone() const override;
};
