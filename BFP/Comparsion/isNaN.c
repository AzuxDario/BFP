#include "comparsion.h"

int isNaN(bfp* value)
{
    if(value->exponent == bfpExponentMaxValue && isZero(value) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
