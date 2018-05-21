#include "comparsion.h"

int isZero(bfp* value)
{
    if(value->sign == 0 && value->exponent == 0 && value->separatorPlace == 1)
    {
        for(int i = 0; i <bfpSignificantArraySize; i++)
        {
            if(value->significant[i] != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
