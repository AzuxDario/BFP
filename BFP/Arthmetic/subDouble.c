#include "arthmetic.h"
#include "Initialization.h"

void subDouble(bfp* value1, double value2)
{
    bfp temp;
    initDouble(&temp, value2);
    subBfp(value1, &temp);
}
