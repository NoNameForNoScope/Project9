#include "StaffOrder.h"

void StaffOrder::setUrgent(bool u) {
    urgent = u;
}

double StaffOrder::getTotalPrice() const {
    double sum = 0;
    for (const auto& d : dishes)
        sum += d.first->getPrice() * d.second;
    return sum;
}

std::unique_ptr<Order> StaffOrder::clone() const {
    return std::make_unique<StaffOrder>(*this);
}
