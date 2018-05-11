#include "Initialization.h"
#include <math.h>
#include <stdio.h>

void initFloat(bfp* target, float source)
{
    initDouble(target, (double)source);
}
