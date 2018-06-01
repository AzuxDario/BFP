#include "comparsion.h"

int isNegativeInf(bfp* value)
{
    if(value->exponent == bfpExponentMinValue && isZero(value) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
