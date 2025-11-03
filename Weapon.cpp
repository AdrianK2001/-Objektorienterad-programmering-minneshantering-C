#include "Weapon.h"

Weapon::Weapon(const std::string& name, int value, int damage)
    : Item(name, value), damage(damage) {}

void Weapon::use() {
    std::cout << "You swing the " << name << " and deal " << damage << " damage!\n";
}

void Weapon::printInfo() const {
    std::cout << "Weapon: " << name << " | Damage: " << damage << " | Value: " << value << std::endl;
}
