#include "Hyperbolic.h"
#include "Initialization.h"
#include "arthmetic.h"
#include "comparsion.h"

void ctanhBfp(bfp* value)
{
    if(isZero(value) != 1)
    {
        bfp sinh, cosh;
        initBFP(&sinh, value);
        initBFP(&cosh, value);

        sinhBfp(&sinh);
        coshBfp(&cosh);

        initBFP(value, &cosh);
        divBfp(value, &sinh);
    }
    else
    {
        // Make NaN
        value->sign = 0;
        value->exponent = bfpExponentMaxValue;
        value->significant[0] = 1;
    }
}
