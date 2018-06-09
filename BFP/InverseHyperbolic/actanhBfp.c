#include "InverseHyperbolic.h"
#include "Initialization.h"
#include "ExponentialAndLogarithmic.h"
#include "Power.h"
#include "comparsion.h"
#include "arthmetic.h"

void actanhBfp(bfp* value)
{
    bfp temp, temp2;

    initInt(&temp, -1);
    initInt(&temp2, 1);

    if(greatherBfp(value, &temp) && lessBfp(value, &temp2))
    {
        // NaN
        value->exponent = bfpExponentMaxValue;
        // NaN should have at least one digit different than 0
        value->significant[0] = 1;
    }
    else
    {
        initBFP(&temp, value);
        addInt(&temp, 1);
        initBFP(&temp2, value);
        subInt(&temp2, -1);
        divBfp(&temp, &temp2);
        logBfp(&temp);
        mulDouble(&temp, 0.5);
        initBFP(value, &temp);
    }
}
