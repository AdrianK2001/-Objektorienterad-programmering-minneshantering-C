#ifndef ARMOR_H
#define ARMOR_H

#include "Item.h"
#include <iostream>

class Armor : public Item
{
    int defense;

public:
    Armor(const std::string &name, double weight, int defense, int value = 0);
    std::string type() const override;
    std::string info() const override;
    void use() override;
    void display() const override;
};

#endif // ARMOR_H