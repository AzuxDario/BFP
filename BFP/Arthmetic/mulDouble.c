#include "arthmetic.h"
#include "Initialization.h"

void mulDouble(bfp* value1, double value2)
{
    bfp temp;
    initDouble(&temp, value2);
    mulBfp(value1, &temp);
}
