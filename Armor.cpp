#include "Armor.h"
#include <iostream>

Armor::Armor(const std::string& name, int value, int defense)
    : Item(name, value), defense(defense) {}

void Armor::display() const {
    std::cout << "Armor: " << getName()
              << " | value=" << getValue()
              << " | defense=" << defense << "\n";
}

void Armor::use() {
    std::cout << getName() << " utrustad! Försvar: " << defense << "\n";
}
