#include "Hyperbolic.h"
#include "Initialization.h"
#include "arthmetic.h"

void tanhBfp(bfp* value)
{
    bfp sinh, cosh;
    initBFP(&sinh, value);
    initBFP(&cosh, value);

    sinhBfp(&sinh);
    coshBfp(&cosh);

    initBFP(value, &sinh);
    divBfp(value, &cosh);
}
