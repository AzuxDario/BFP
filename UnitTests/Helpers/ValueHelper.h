#ifndef VALUEHELPER_H
#define VALUEHELPER_H

#include "string"
#include "BFP.h"
#include "Comparsion/comparsion.h"

class ValueHelper
{
public:

    enum class Sign {plus = 0, minus = 1};

    ValueHelper();

    static void assignNaN(bfp* value);
    static void assignPositiveInf(bfp* value);
    static void assignNegativeInf(bfp* value);
    static bool checkValue(bfp* value, Sign sign, std::string significant, int exponent);
    // Use functions from library to check if values
    // We have unit tests to test these functions so we can know if they function properly.
    static bool checkEqualBfp(bfp* value1, bfp* value2);
    static bool checkGreatherBfp(bfp* value1, bfp* value2);
    static bool checkLessBfp(bfp* value1, bfp* value2);
    static bool checkIsZero(bfp* value);
    static bool checkIsNan(bfp* value);
    static bool checkIsPosInf(bfp* value);
    static bool checkIsNegInf(bfp* value);
};

#endif // VALUEHELPER_H
