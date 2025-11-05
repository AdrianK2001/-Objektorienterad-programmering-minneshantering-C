#ifndef ARMOR_H
#define ARMOR_H

#include "Item.h"
#include <string>

class Armor : public Item {
public:
    Armor(std::string name, double weight, int defense)
        : Item(std::move(name), weight), defense_(defense) {}

    std::string type() const override { return "Armor"; }
    void use() override;
    std::string info() const override;

private:
    int defense_{0};
};

#endif // ARMOR_H
