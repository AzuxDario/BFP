#include "Initialization.h"

void initBFP(bfp* target, bfp* source)
{
    target->sign = source->sign;
    target->exponent = source->exponent;
    target->separatorPlace = source->separatorPlace;
    for(int i = 0; i < bfpSignificantArraySize; i++)
    {
        target->significant[i] = source->significant[i];
    }
}
