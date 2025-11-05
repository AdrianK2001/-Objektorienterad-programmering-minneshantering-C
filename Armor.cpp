#include "Armor.h"
#include <iostream>
#include <sstream>

void Armor::use() {
    std::cout << name_ << " utrustad! Försvar: " << defense_ << "\n";
}

std::string Armor::info() const {
    std::ostringstream os;
    os << type() << ": " << name_ << " (" << weight_ << " kg)"
       << " | DEF=" << defense_;
    return os.str();
}
