#include <iostream>

#include "HumanMage.h"

using namespace std;

int main() {
    Hero* player = new HumanMage("A");
    Hero* enemy = new HumanMage("B");

    cout << player->getName() << ": " << player->getHealth() << " | " << player->getDamage() << endl;
    cout << enemy->getName() << ": " << enemy->getHealth() << " | " << enemy->getDamage() << endl;

    player->Attack(enemy);
    cout << enemy->getName() << ": " << enemy->getHealth() << " | " << enemy->getDamage() << endl;

    enemy->Attack(player);
    cout << player->getName() << ": " << player->getHealth() << " | " << player->getDamage() << endl;
}
