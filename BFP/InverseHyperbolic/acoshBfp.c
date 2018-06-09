#include "InverseHyperbolic.h"
#include "Initialization.h"
#include "ExponentialAndLogarithmic.h"
#include "Power.h"
#include "comparsion.h"
#include "arthmetic.h"

void acoshBfp(bfp* value)
{
    bfp temp;

    initInt(&temp, 1);

    if(lessBfp(value, &temp))
    {
        // NaN
        value->exponent = bfpExponentMaxValue;
        // NaN should have at least one digit different than 0
        value->significant[0] = 1;
    }
    else
    {
        initBFP(&temp, value);
        powInt(&temp, 2);
        subInt(&temp, 1);
        sqrtBfp(&temp);
        addBfp(&temp, value);
        logBfp(&temp);
        initBFP(value, &temp);
    }
}
