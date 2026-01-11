#include "Order.h"
#include <iostream>

Order::Order(PaymentMethod p, std::string addr)
    : payment(p), address(addr), timestamp(time(nullptr)) {}

Order::Order(const Order& other)
    : payment(other.payment),
    address(other.address),
    timestamp(other.timestamp)
{
    for (const auto& item : other.dishes) {
        dishes.emplace_back(
            item.first->clone(),
            item.second
        );
    }
}


Order& Order::operator+=(std::pair<std::unique_ptr<Dish>, int> item) {
    dishes.push_back(std::move(item));
    return *this;
}

void Order::save(std::ostream& out) const {
    out << timestamp << "\n";
}

void Order::load(std::istream& in) {
    in >> timestamp;
}
