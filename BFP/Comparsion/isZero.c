#include "comparsion.h"

int isZero(bfp* value)
{
    if(value->exponent == 0)
    {
        for(int i = 0; i < bfpSignificantArraySize; i++)
        {
            if(value->significant[i] != 0)
            {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
