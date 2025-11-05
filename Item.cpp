#include "Item.h"

Item::Item(const std::string &name, double weight, int value)
    : name(name), weight(weight), value(value) {}

Item::~Item() {}

std::string Item::getName() const { return name; }
double Item::getWeight() const { return weight; }
int Item::getValue() const { return value; }
