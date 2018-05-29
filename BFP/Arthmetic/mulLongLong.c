#include "arthmetic.h"
#include "Initialization.h"

void mulLongLong(bfp* value1, long long value2)
{
    bfp temp;
    initLongLong(&temp, value2);
    mulBfp(value1, &temp);
}
