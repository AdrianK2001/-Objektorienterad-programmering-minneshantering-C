#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
protected:
    std::string name;
    double weight;
    int value;

public:
    Item(const std::string &name, double weight, int value = 0);
    virtual ~Item();

    std::string getName() const;
    double getWeight() const;
    int getValue() const;

    virtual std::string type() const = 0;
    virtual std::string info() const = 0;
    virtual void use() = 0;
    virtual void display() const = 0;
};

#endif
