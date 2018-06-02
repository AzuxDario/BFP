#include "Initialization.h"

void initStringExp(bfp* target, char* source, int exponent)
{
    initString(target, source);
    int sum = target->exponent + exponent;

    // Check if we have NaN or Inf
    if(target->exponent > 0 && exponent > 0)
    {
        if(sum < target->exponent && sum < exponent)
        {
            // NaN or Inf
            target->separatorPlace = 1;
            target->exponent = bfpExponentMaxValue;
            return;
        }
    }
    else if(target->exponent < 0 && exponent < 0)
    {
        if(sum > target->exponent && sum > exponent)
        {
            // NaN or Inf
            target->separatorPlace = 1;
            target->exponent = bfpExponentMinValue;
            return;
        }
    }

}
