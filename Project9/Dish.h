#pragma once
#include <string>
#include <vector>
#include <memory>

class Dish {
protected:
    std::string name;
    std::vector<std::string> ingredients;
    double price;

public:
    Dish(std::string n, double p);
    virtual ~Dish() = default;

    virtual double getPrice() const;
    virtual std::string getName() const = 0;
    virtual std::unique_ptr<Dish> clone() const = 0;
};