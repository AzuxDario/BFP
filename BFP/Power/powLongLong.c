#include "arthmetic.h"
#include "Power.h"
#include "Initialization.h"
#include "Comparsion/comparsion.h"

void powLongLong(bfp* value1, long long value2)
{
    if(isNaN(value1) || isNegativeInf(value1) || isPositiveInf(value1))
    {
        value1->exponent = bfpExponentMaxValue;
        // NaN should have at least one digit different than 0
        value1->significant[0] = 1;
        return;
    }
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
