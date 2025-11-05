#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class Item
{
protected:
    std::string name;
    int value;

public:
    // Konstruktor
    Item(const std::string &name, int value) : name(name), value(value) {}


    // Virtuell destruktor (för polymorfism)
    virtual ~Item() {}

     // Getters
    std::string getName() const { return name; }
    int getValue() const { return value; }

    // Virtuella funktioner - måste implementeras i subklasser
    virtual void display() const = 0;
    virtual void use() = 0;
};

#endif
