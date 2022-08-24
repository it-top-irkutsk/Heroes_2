#pragma once

#include "Human.h"
#include "Mage.h"

class HumanMage : public Human, public Mage {
public:
    explicit HumanMage(const string &name) : Human(name), Mage() {}

    int getHealth() const override {
        int total_health = health + heath_rate;
        if (total_health <= 0) {
            return 0;
        } else {
            return total_health;
        }
    }

    int getDamage() const override {
        return damage + damage_rate;
    }

    void Attack(Hero* enemy) override {
        int total_damage = damage + damage_rate;
        int _health = enemy->getHealth();
        enemy->setHealth(_health - total_damage);
    }
};
