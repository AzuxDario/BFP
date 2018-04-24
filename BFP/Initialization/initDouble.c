#include "Initialization.h"
#include <math.h>

void initDouble(bfp* value1, double value2)
{
    int negative;
    initZero(value1);

    negative = value2 < 0;
    value2 = fabs(value2);

    value1->sign = negative ? 1 : 0;
}
