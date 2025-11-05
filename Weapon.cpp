#include "Weapon.h"

#include <sstream>
#include <string>
#include <iostream>

Weapon::Weapon(const std::string &name, double weight, int damage, int value)
    : Item(name, weight, value), damage(damage) {}

std::string Weapon::type() const { return "Weapon"; }

std::string Weapon::info() const
{
    std::ostringstream os;
    os << type() << ": " << name << " (" << weight << " kg) | DMG=" << damage << " | Value=" << value;
    return os.str();
}

void Weapon::use()
{
    std::cout << "You swing the " << name << " and deal " << damage << " damage!\n";
}

void Weapon::display() const
{
    std::cout << info() << std::endl;
}