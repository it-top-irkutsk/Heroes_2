#pragma once

#include <iostream>

#include "Hero.h"
#include "Specialization.h"

class CLI {
public:
    static void ShowHero(Hero const* hero) {
        std::cout << hero->getName() << ": " << hero->getHealth() << " | " << hero->getDamage();
    }

    static void ShowRate(Specialization const* hero) {
        std::cout << hero->getHeathRate() << " | " << hero->getDamageRate();
    }

    static void ShowHeroInfo(Hero* hero) {
        ShowHero(hero);
        ShowRate(dynamic_cast<Specialization*>(hero));
        std::cout << std::endl;
    }
};
