#include "Player.h"
#include <iostream>

Player::Player(const std::string &name) : name(name) {}

Player::~Player()
{
    for (auto p : inventory)
        delete p;
}

void Player::addItem(Item *item)
{
    inventory.push_back(item);
}

void Player::removeItem(int index)
{
    if (index < 0 || index >= (int)inventory.size())
    {
        std::cout << "Invalid item index!\n";
        return;
    }
    delete inventory[index];
    inventory.erase(inventory.begin() + index);
}

void Player::useItem(int index) const
{
    if (index < 0 || index >= (int)inventory.size())
    {
        std::cout << "Invalid item index!\n";
        return;
    }
    inventory[index]->use();
}

void Player::listInventory() const
{
    if (inventory.empty())
    {
        std::cout << "Inventory is empty.\n";
        return;
    }
    for (size_t i = 0; i < inventory.size(); ++i)
    {
        std::cout << i + 1 << ". ";
        inventory[i]->display(); // 🔧 FIXED: polymorphic display
    }
}

int Player::inventorySize() const
{
    return (int)inventory.size();
}
