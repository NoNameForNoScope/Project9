#include "StudentOrder.h"

double StudentOrder::getTotalPrice() const {
    double sum = 0;
    for (const auto& d : dishes)
        sum += d.first->getPrice() * d.second;
    return sum * 0.95;
}

std::unique_ptr<Order> StudentOrder::clone() const {
    return std::make_unique<StudentOrder>(*this);
}
