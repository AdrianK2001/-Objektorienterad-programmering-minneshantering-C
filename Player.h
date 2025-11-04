#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Item.h"

class Player {
private:
    std::string name;
    std::vector<Item*> inventory; // heap-allokerade objekt

public:
    Player(const std::string& name);
    ~Player(); // måste frigöra minne

    void addItem(Item* item);
    void showInventory() const;
    void useItem(int index);
    void removeItem(int index);
};

#endif
