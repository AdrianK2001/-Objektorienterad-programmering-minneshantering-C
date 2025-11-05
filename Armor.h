#ifndef ARMOR_H
#define ARMOR_H

#include "Item.h"
#include <string>

class Armor : public Item {
public:
    Armor(const std::string& name, int value, int defense);

    // Override enligt Item
    void display() const override;
    void use() override;

    int getDefense() const { return defense; }

private:
    int defense{0};
};

#endif // ARMOR_H
