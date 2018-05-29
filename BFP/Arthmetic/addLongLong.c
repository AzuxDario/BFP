#include "arthmetic.h"
#include "Initialization.h"

void addLongLong(bfp* value1, long long value2)
{
    bfp temp;
    initLongLong(&temp, value2);
    addBfp(value1, &temp);
}
