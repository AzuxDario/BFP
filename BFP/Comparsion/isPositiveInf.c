#include "comparsion.h"

int isPositiveInf(bfp* value)
{
    if(value->exponent == bfpExponentMaxValue && isZero(value) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
