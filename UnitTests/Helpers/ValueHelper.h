#ifndef VALUEHELPER_H
#define VALUEHELPER_H

#include "string"
#include "BFP.h"

class ValueHelper
{
public:

    enum class Sign {plus = 0, minus = 1};

    ValueHelper();

    static void assignNaN(bfp* value);
    static void assignPositiveInf(bfp* value);
    static void assignNegativeInf(bfp* value);
    static bool checkValue(bfp* value, Sign sign, int exponent, std::string significant);
};

#endif // VALUEHELPER_H
