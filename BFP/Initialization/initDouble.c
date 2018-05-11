#include "Initialization.h"
#include <math.h>

void initDouble(bfp* target, double source)
{
    int negative;
    initZero(target);

    negative = source < 0;
    source = fabs(source);

    target->sign = negative ? 1 : 0;
}
