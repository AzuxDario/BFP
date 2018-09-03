#include "InverseHyperbolic.h"
#include "Initialization.h"
#include "ExponentialAndLogarithmic.h"
#include "Power.h"
#include "comparsion.h"
#include "arthmetic.h"

void asinhBfp(bfp* value)
{
    bfp temp;

    initBFP(&temp, value);
    powInt(&temp, 2);
    addInt(&temp, 1);
    sqrtBfp(&temp);
    addBfp(&temp, value);
    logBfp(&temp);
    initBFP(value, &temp);
}
