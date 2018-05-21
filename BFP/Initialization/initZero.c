#include "Initialization.h"

void initZero(bfp* value)
{
    int i;
    value->sign = 0;
    value->exponent = 0;
    value->separatorPlace = 1;
    for(i = 0; i < bfpSignificantArraySize; i++)
    {
        value->significant[i] = 0;
    }
}
