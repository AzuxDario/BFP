#include "comparsion.h"

int lessBfp(bfp* value1, bfp* value2)
{
    if(isNaN(value1) || isNaN(value2) || isPositiveInf(value1) || isNegativeInf(value1) || isPositiveInf(value2) || isNegativeInf(value2))
    {
        return 0;
    }
    if(value1->sign < value2->sign)
    {
        return 0;
    }
    if(value1->exponent > value2->exponent)
    {
        return 0;
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
    return 0;
}
