#pragma once
#include "Order.h"

class StaffOrder : public Order {
    bool urgent = false;

public:
    using Order::Order;
    void setUrgent(bool u);
    double getTotalPrice() const override;
    std::unique_ptr<Order> clone() const override;
};
