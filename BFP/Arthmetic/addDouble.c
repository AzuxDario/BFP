#include "arthmetic.h"
#include "Initialization.h"

void addDouble(bfp* value1, double value2)
{
    bfp temp;
    initDouble(&temp, value2);
    addBfp(value1, &temp);
}
