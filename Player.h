#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>
#include "Item.h"

class Player
{
    std::string name;
    std::vector<Item *> inventory;

public:
    Player(const std::string &name);
    ~Player();

    void addItem(Item *item);
    void removeItem(int index);
    void useItem(int index) const;
    void listInventory() const;
    int inventorySize() const;
};

#endif
