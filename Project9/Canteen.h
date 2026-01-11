#pragma once
#include <vector>
#include <memory>
#include "Dish.h"
#include "Order.h"

class Canteen {
    std::vector<std::string> availableDishes;

    Canteen() = default;

public:
    static Canteen& getInstance();
    void addAvailableDish(const std::string& name);
    void processOrder(std::unique_ptr<Order> order);
};
