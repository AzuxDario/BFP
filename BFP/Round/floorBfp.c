#include "Round.h"
#include "Initialization.h"
#include "arthmetic.h"

void floorBfp(bfp* value)
{
    bfp tempValue;

    if(isNaN(value) || isNegativeInf(value) || isPositiveInf(value))
    {
        value->exponent = bfpExponentMaxValue;
        // NaN should have at least one digit different than 0
        value->significant[0] = 1;
        return;
    }

    // If we don't have info about the fractional part, there's no point to round
    if(value->exponent > bfpSignificantArraySize - 1)
    {
        return;
    }
    // If number is higher or equal than 1
    if(value->exponent >= 0 || (value->exponent == 0 && value->significant[0] >= 1))
    {
        if(value->sign == 1)
        {
            initStringExp(&tempValue, "1", -value->exponent);
            subBfp(value, &tempValue);
        }

        for(int i = value->exponent + 1; i < bfpSignificantArraySize; i++)
        {
            value->significant[i] = 0;
        }
    }
    // Else we have value lower than 1.0
    else
    {
        initZero(value);
    }

}
