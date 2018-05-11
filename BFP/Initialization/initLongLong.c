#include "Initialization.h"
#include <stdio.h>

void initLongLong(bfp* target, long long source)
{
    char buffer[55];
    sprintf(buffer, "%-25lld", source);
    for(int i = 0; i < 50; i++)
    {
        if(buffer[i] == ' ') buffer[i] = 0;
    }
    initString(target, buffer);
}
