#include "arthmetic.h"
#include "Power.h"
#include "Initialization.h"

void powLongLong(bfp* value1, long long value2)
{
    bfp temp;
    initLongLong(&temp, value2);
    if(value2 < 0)
    {
        value2 *= -1;
        bfp dividend;
        initString(&dividend, "1");
        divBfp(&dividend, value1);
        initBFP(value1, &dividend);
    }
    initBFP(&temp, value1);
    for(int i = 1; i < value2; i++)
    {
        mulBfp(&temp, value1);
    }
    if(value2 == 0)
    {
        initString(&temp, "1");
    }
    initBFP(value1, &temp);
}
