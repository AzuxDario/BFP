#include "comparsion.h"

int isPositiveInf(bfp* value)
{
    if(value->exponent == bfpExponentMaxValue)
    {
        for(int i = 0; i < bfpSignificantArraySize; i++)
        {
            if(value->significant[i] != 0 )
            {
                return 0;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}
