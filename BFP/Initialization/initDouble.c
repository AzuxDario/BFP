#include "Initialization.h"
#include <math.h>
#include <stdio.h>

void initDouble(bfp* target, double source)
{
    char buffer[60];
    sprintf(buffer, "%-55.55f", source);
    initString(target, buffer);
}
