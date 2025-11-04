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
    Item(const std::string &name, int value);

    virtual ~Item();

    std::string getName() const;
    int getValue() const;

    virtual void display() const = 0;
    virtual void use() = 0;
};

#endif
