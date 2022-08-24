#pragma once

#include "Specialization.h"

class Mage : public Specialization {
private:
    const int HEALTH_RATE = 15;
    const int DAMAGE_RATE = 0;
protected:
    Mage() : Specialization(HEALTH_RATE, DAMAGE_RATE) {}
};

