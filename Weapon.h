#ifndef WEAPON_H
#define WEAPON_H

// #include "Item.h"

class Weapon : public Item {
private:
    int damage;

public:
    Weapon(const std::string& name, int value, int damage);
    void use() override;
    void printInfo() const override;
};

#endif
