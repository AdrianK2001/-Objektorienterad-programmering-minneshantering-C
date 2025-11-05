#include "potion.h"
#include <sstream>

Potion::Potion(const std::string &name, double weight, int healAmount, int value)
    : Item(name, weight, value), healAmount(healAmount) {}

std::string Potion::type() const { return "Potion"; }

std::string Potion::info() const
{
    std::ostringstream os;
    os << type() << ": " << name << " (" << weight << " kg) | Heal=" << healAmount << " | Value=" << value;
    return os.str();
}

void Potion::use()
{
    std::cout << "You drink " << name << " and recover " << healAmount << " HP!\n"; // 🔧 FIXED: correct action
}

void Potion::display() const
{
    std::cout << info() << std::endl;
}