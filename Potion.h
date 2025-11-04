#ifndef POTION_H
#define POTION_H

#include <iostream>
#include <string>
using namespace std;

// Abstrakt basklass
class Item {
protected:
    string name;
    double weight;
public:
    Item(string n, double w) : name(n), weight(w) {}
    virtual void use() = 0; // Abstrakt metod
    virtual ~Item() {}
};

// Underklass: Potion
class Potion : public Item {
    int healAmount;
public:
    Potion(string n, double w, int heal);
    void use() override;
};

#endif
