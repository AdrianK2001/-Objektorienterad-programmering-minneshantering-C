#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"
#include <iostream>

class Weapon : public Item
{
private:
    int damage;

public:
    Weapon(const std::string &name, double weight, int damage, int value = 0);
    std::string type() const override;
    std::string info() const override;
    void use() override;
    void display() const override;
};

#endif
