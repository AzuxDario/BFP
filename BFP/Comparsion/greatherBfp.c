#include "BFP.h"

int greatherBfp(bfp* value1, bfp* value2)
{
    int i;
    if(value1->sign > value2->sign)
    {
        return 0;
    }
    if(value1->exponent < value2->exponent)
    {
        return 0;
    }
    for(i = 0; i < bfpSignificantArraySize; i++)
    {
        if(value1->significant[i] < value2->significant[i])
        {
            return 0;
        }
    }
    return 1;
}
