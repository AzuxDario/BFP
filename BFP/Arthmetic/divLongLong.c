#include "arthmetic.h"
#include "Initialization.h"

void divLongLong(bfp* value1, long long value2)
{
    bfp temp;
    initLongLong(&temp, value2);
    divBfp(value1, &temp);
}
