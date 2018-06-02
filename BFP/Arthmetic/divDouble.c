#include "arthmetic.h"
#include "Initialization.h"

void divDouble(bfp* value1, double value2)
{
    bfp temp;
    initDouble(&temp, value2);
    divBfp(value1, &temp);
}
