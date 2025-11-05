#ifndef POTION_H
#define POTION_H

#include <iostream>
#include <string>
#include "Item.h"
using namespace std;

class Potion : public Item
{
    int healAmount;

public:
    Potion(const std::string &name, double weight, int healAmount, int value = 0);
    std::string type() const override;
    std::string info() const override;
    void use() override;
    void display() const override;
};

#endif
