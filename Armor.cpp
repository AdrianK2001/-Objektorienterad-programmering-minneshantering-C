#include "Armor.h"
#include <sstream>

Armor::Armor(const std::string &name, double weight, int defense, int value)
    : Item(name, weight, value), defense(defense) {}

std::string Armor::type() const { return "Armor"; }

std::string Armor::info() const
{
    std::ostringstream os;
    os << type() << ": " << name << " (" << weight << " kg) | DEF=" << defense << " | Value=" << value;
    return os.str();
}

void Armor::use()
{
    std::cout << name << " equipped! Defense +" << defense << "\n";
}

void Armor::display() const
{
    std::cout << info() << std::endl;
}
