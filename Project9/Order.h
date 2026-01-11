#pragma once
#include <vector>
#include <memory>
#include <ctime>
#include "Dish.h"
#include "PaymentMethod.h"

class Order {
protected:
    std::vector<std::pair<std::unique_ptr<Dish>, int>> dishes;
    PaymentMethod payment;
    std::string address;
    time_t timestamp;

public:
    Order(PaymentMethod p, std::string addr);
    Order(const Order& other);
    virtual ~Order() = default;

    Order& operator+=(std::pair<std::unique_ptr<Dish>, int> item);

    virtual double getTotalPrice() const = 0;
    virtual std::unique_ptr<Order> clone() const = 0;

    virtual void save(std::ostream&) const;
    virtual void load(std::istream&);
};
