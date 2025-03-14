#pragma once
#include "Option.h"
#include <stdexcept>

class EuropeanVanillaOption : public Option {
protected:
    double _strike;

public:
    EuropeanVanillaOption(double expiry, double strike)
        : Option(expiry), _strike(strike) {
        if (strike < 0 || expiry < 0) {
            throw std::invalid_argument("Negative values are not allowed.");
        }
    }

    double getStrike() const {
        return _strike;
    }
};