#pragma once

class Specialization {
protected:
    int heath_rate;
    int damage_rate;

    Specialization(int heathRate, int damageRate) : heath_rate(heathRate), damage_rate(damageRate) {}

    virtual ~Specialization() {}
};

