#ifndef VALUEHELPER_H
#define VALUEHELPER_H

#include "BFP.h"

class ValueHelper
{
public:
    ValueHelper();

    static void assignNaN(bfp* value);
    static void assignPositiveInf(bfp* value);
    static void assignNegativeInf(bfp* value);
};

#endif // VALUEHELPER_H
