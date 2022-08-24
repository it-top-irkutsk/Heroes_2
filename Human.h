#pragma once

#include "Hero.h"

class Human : public Hero {
private:
    const int HEALTH = 100;
    const int DAMAGE = 15;
protected:
    Human(const string& name) : Hero(name, HEALTH, DAMAGE) {}

    ~Human() override {}
};
