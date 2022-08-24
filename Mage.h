#pragma once

#include "Specialization.h"

class Mage : public Specialization {
private:
    static const int HEALTH_RATE = 15;
    static const int DAMAGE_RATE = 5;
protected:
    Mage() : Specialization(HEALTH_RATE, DAMAGE_RATE) {}
};

