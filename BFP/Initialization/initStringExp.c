#include "Initialization.h"

void initStringExp(bfp* target, char* source, int exponent)
{
    initString(target, source);
    int sum = target->exponent + exponent;

    // Check if we have Inf
    if(target->exponent > 0 && exponent > 0)
    {
        if(sum < target->exponent && sum < exponent)
        {
            // NaN or Inf
            target->separatorPlace = 1;
            target->exponent = bfpExponentMaxValue;
            // In Inf we should make sure every value will be zero
            for(int i = 0; i < bfpSignificantArraySize; i++)
            {
                target->significant[i] = 0;
            }
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
            // In Inf we should make sure every value will be zero
            for(int i = 0; i < bfpSignificantArraySize; i++)
            {
                target->significant[i] = 0;
            }
            return;
        }
    }

    target->exponent = sum;

}
