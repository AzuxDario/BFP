#include "comparsion.h"

int greatherBfp(bfp* value1, bfp* value2)
{
    if(isNaN(value1) || isNaN(value2) || isPositiveInf(value1) || isNegativeInf(value1) || isPositiveInf(value2) || isNegativeInf(value2))
    {
        return 0;
    }
    if(value1->sign > value2->sign)
    {
        return 0;
    }
    else if(value1->sign < value2->sign)
    {
        return 1;
    }
    // Values are positive
    else if(value1->sign == 0 && value2->sign == 0)
    {
        if(value1->exponent < value2->exponent)
        {
            return 0;
        }
        else if(value1->exponent > value2->exponent)
        {
            return 1;
        }
        else if(value1->exponent == value2->exponent)
        {
            for(int i = 0; i < bfpSignificantArraySize; i++)
            {
                if(value1->significant[i] < value2->significant[i])
                {
                    return 0;
                }
                else if(value1->significant[i] > value2->significant[i])
                {
                    return 1;
                }
            }
        }
    }
    //Values are negative
    else if(value1->sign == 1 && value2->sign == 1)
    {
        if(value1->exponent > value2->exponent)
        {
            return 0;
        }
        else if(value1->exponent < value2->exponent)
        {
            return 1;
        }
        else if(value1->exponent == value2->exponent)
        {
            for(int i = 0; i < bfpSignificantArraySize; i++)
            {
                if(value1->significant[i] > value2->significant[i])
                {
                    return 0;
                }
                else if(value1->significant[i] < value2->significant[i])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}
