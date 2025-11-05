#include <iostream>
#include "Player.h"
#include "Weapon.h"
#include "Armor.h"
#include "Potion.h"
using namespace std;

int main()
{
    Player player("Hero");

    // 🔧 FIXED: use consistent constructors
    player.addItem(new Weapon("Sword", 3.5, 10, 100));
    player.addItem(new Armor("Leather Armor", 5.0, 5, 80));
    player.addItem(new Potion("Healing Potion", 0.2, 20, 25));

    int choice = 0;
    do
    {
        cout << "\n--- Menu ---\n";
        cout << "1. List inventory\n2. Use item\n3. Remove item\n4. Exit\nChoice: ";
        cin >> choice;
        if (!cin)
            break;
        if (choice == 1)
        {
            player.listInventory();
        }
        else if (choice == 2)
        {
            cout << "Enter item number to use: ";
            int idx;
            cin >> idx;
            player.useItem(idx - 1);
        }
        else if (choice == 3)
        {
            cout << "Enter item number to remove: ";
            int idx;
            cin >> idx;
            player.removeItem(idx - 1);
        }
    } while (choice != 4);

    return 0;
}
