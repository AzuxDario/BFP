#include "comparsion.h"

int lessBfp(bfp* value1, bfp* value2)
{
    int i;
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
        for(i = 0; i < bfpSignificantArraySize; i++)
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
