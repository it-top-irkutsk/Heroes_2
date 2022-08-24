#pragma once

#include "Hero.h"

class Human : public Hero {
private:
    static const int HEALTH = 100;
    static const int DAMAGE = 15;
protected:
    Human(const string& name) : Hero(name, HEALTH, DAMAGE) {}

    ~Human() override {}
};
