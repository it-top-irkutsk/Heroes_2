#include <iostream>

#include "CLI.h"

#include "HumanMage.h"

using namespace std;

int main() {
    Hero* player = new HumanMage("A");
    Hero* enemy = new HumanMage("B");

    CLI::ShowHeroInfo(player);

    CLI::ShowHeroInfo(enemy);

    player->Attack(enemy);
    CLI::ShowHero(enemy); cout << endl;

    enemy->Attack(player);
    CLI::ShowHero(player); cout << endl;
}
