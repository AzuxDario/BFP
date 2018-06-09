#include "InverseHyperbolic.h"
#include "Initialization.h"
#include "ExponentialAndLogarithmic.h"
#include "Power.h"
#include "comparsion.h"
#include "arthmetic.h"

void atanhBfp(bfp* value)
{
    bfp temp, temp2;

    initInt(&temp, -1);
    initInt(&temp2, 1);

    if(lessBfp(value, &temp) || greatherBfp(value, &temp2))
    {
        // NaN
        value->exponent = bfpExponentMaxValue;
        // NaN should have at least one digit different than 0
        value->significant[0] = 1;
    }
    else
    {
        initInt(&temp, 1);
        addBfp(&temp, value);
        initInt(&temp2, 1);
        subBfp(&temp2, value);
        divBfp(&temp, &temp2);
        logBfp(&temp);
        mulDouble(&temp, 0.5);
        initBFP(value, &temp);
    }
}
