#include "ExponentialAndLogarithmic.h"
#include "Initialization.h"
#include "arthmetic.h"
#include "Power.h"

void expBfp(bfp* value)
{
    bfp result;
    bfp dividend, divider;


    initZero(&result);

    for(int i = 0; i < 20; i++)
    {
        initBFP(&dividend, value);
        powInt(&dividend, i);
        factInt(&divider, (unsigned int)i);
        divBfp(&dividend, &divider);
        addBfp(&result, &dividend);
    }

    initBFP(value, &result);
}
