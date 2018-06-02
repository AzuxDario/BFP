#include "Initialization.h"
#include <stdbool.h>

void normalization(bfp* value)
{
    // Check if we have Inf
    if(value->exponent == bfpExponentMinValue || value->exponent == bfpExponentMaxValue)
    {
        // Inf
        value->separatorPlace = 1;
        // In Inf we should make sure every value will be zero
        for(int i = 0; i < bfpSignificantArraySize; i++)
        {
            value->significant[i] = 0;
        }
        return;
    }
    //Move separator to first place.
    if(value->separatorPlace == 0)
    {
        value->exponent--;
        value->separatorPlace = 1;
        // Check if after this operation we have Inf
        if(value->exponent == bfpExponentMinValue)
        {
            // In Inf we should make sure every value will be zero
            for(int i = 0; i < bfpSignificantArraySize; i++)
            {
                value->significant[i] = 0;
            }
            return;
        }
    }
    else if(value->separatorPlace != 1)
    {
        int sum = value->exponent + (value->separatorPlace - 1);
        // Check if we had overflow
        if(sum < value->exponent && sum < (value->separatorPlace -1))
        {
            // NaN or Inf
            value->separatorPlace = 1;
            value->exponent = bfpExponentMaxValue;
            return;
        }
        value->exponent += (value->separatorPlace - 1);
        value->separatorPlace = 1;
    }

    // When value is 0 next loop will be repeat infinity times. To avoid it we need to catch zero.
    bool isZero = true;
    for(int i = 0; i < bfpSignificantArraySize - 1; i++)
    {
        if(value->significant[i] != 0)
        {
            isZero = false;
            break;
        }
    }

    // If we have zero value make it proper zero and leave function.
    if(isZero == true)
    {
        initZero(value);
        return;
    }

    //If there are lead zeros remove them.
    while(value->significant[0] == 0)
    {
        // This loop is doing shift left of whole significant.
        // -1 to avoid take value out of scope.
        for(int i = 0; i < bfpSignificantArraySize - 1; i++)
        {
            value->significant[i] = value->significant[i+1];
        }

        //Assign last zero.
        value->significant[bfpSignificantArraySize - 1] = 0;
        value->exponent--;

        // Check if after this operation we have Inf
        if(value->exponent == bfpExponentMinValue)
        {
            // In Inf we should make sure every value will be zero
            for(int i = 0; i < bfpSignificantArraySize; i++)
            {
                value->significant[i] = 0;
            }
            return;
        }
    }
}
