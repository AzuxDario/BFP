#include "arthmetic.h"
#include "Initialization.h"

void subLongLong(bfp* value1, long long value2)
{
    bfp temp;
    initLongLong(&temp, value2);
    subBfp(value1, &temp);
}
