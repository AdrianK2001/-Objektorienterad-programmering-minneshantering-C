#include "potion.h"

Potion::Potion(string n, double w, int heal) : Item(n, w), healAmount(heal) {}

void Potion::use() {
    cout << "\033[32mDu dricker drycken " << name
         << " (vikt: " << weight << " kg)"
         << " och återfår " << healAmount << " HP!\033[0m" << endl;
}

int main() {
    system("chcp 65001 > nul");

    string namn;
    double vikt;
    int hp;

    cout << "Ange namn på din potion (t.ex. HealingPotion): ";
    cin >> namn;

    cout << "Ange vikt (t.ex. 0.5): ";
    cin >> vikt;

    cout << "Ange hur mycket HP den återställer (t.ex. 20): ";
    cin >> hp;

    Potion minPotion(namn, vikt, hp);
    minPotion.use();

    return 0;
}
