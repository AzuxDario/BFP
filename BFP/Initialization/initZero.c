#include "BFP.h"

void initZero(bfp* value)
{
    int i;
    value->sign = 0;
    value->exponent = 0;
    for(i = 0; i < bfpSignificantArraySize; i++)
    {
        value->significant[i] = 0;
    }
}
