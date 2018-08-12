#include "comparsion.h"

int isNaN(bfp* value)
{
    if(value->exponent == bfpExponentMaxValue)
    {
        for(int i = 0; i < bfpSignificantArraySize; i++)
        {
            if(value->significant[i] != 0 )
            {
                return 1;
            }
        }
        return 0;
    }
    else
    {
        return 0;
    }
}
