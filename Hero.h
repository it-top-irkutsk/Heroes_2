#pragma once

#include <string>

using namespace std;

class Hero {
private:
    string _name;

protected:
    int health;
    int damage;

    Hero(const string &name, int health, int damage) : _name(name), health(health), damage(damage) {}

    virtual ~Hero() {}

public:
    virtual void Attack(Hero* enemy) = 0;

    virtual int getHealth() const = 0;

    virtual int getDamage() const = 0;

    void setHealth(int health) {
        this->health = health;
    }

    const string& getName() const {
        return _name;
    }
};
