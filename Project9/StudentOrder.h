#pragma once
#include "Order.h"

class StudentOrder : public Order {
public:
    using Order::Order;
    double getTotalPrice() const override;
    std::unique_ptr<Order> clone() const override;
};
