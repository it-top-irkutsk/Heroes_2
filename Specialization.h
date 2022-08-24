#pragma once

class Specialization {
protected:
    int heath_rate;
    int damage_rate;

    Specialization(int heathRate, int damageRate) : heath_rate(heathRate), damage_rate(damageRate) {}

    virtual ~Specialization(){}

public:
    int getHeathRate() const {
        return heath_rate;
    }

    int getDamageRate() const {
        return damage_rate;
    }
};

