#include "Player.h"
#include <iostream>

Player::Player(const std::string& name) : name(name) {}

Player::~Player() {
    // Frigör allt dynamiskt allokerat minne
    for (Item* item : inventory) {
        delete item;
    }
    inventory.clear();
}

void Player::addItem(Item* item) {
    inventory.push_back(item);
    std::cout << item->getName() << " added to inventory!\n";
}

void Player::showInventory() const {
    if (inventory.empty()) {
        std::cout << "Inventory is empty.\n";
        return;
    }

    std::cout << "\n--- " << name << "'s Inventory ---\n";
    for (size_t i = 0; i < inventory.size(); ++i) {
        std::cout << i + 1 << ". ";
        inventory[i]->display();
    }
}

void Player::useItem(int index) {
    if (index < 0 || index >= (int)inventory.size()) {
        std::cout << "Invalid item index!\n";
        return;
    }

    inventory[index]->use();
}

void Player::removeItem(int index) {
    if (index < 0 || index >= (int)inventory.size()) {
        std::cout << "Invalid item index!\n";
        return;
    }

    delete inventory[index]; // Frigör minne
    inventory.erase(inventory.begin() + index);
    std::cout << "Item removed from inventory.\n";
}
