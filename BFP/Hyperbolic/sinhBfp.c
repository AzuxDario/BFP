#include "Hyperbolic.h"
#include "Initialization.h"
#include "arthmetic.h"
#include "ExponentialAndLogarithmic.h"

void coshBfp(bfp* value)
{
    bfp ePlus, eMinus;

    // Prepare values
    initBFP(&ePlus, value);
    initBFP(&eMinus, value);
    negBfp(&eMinus);

    // Calculate exponents
    expBfp(&ePlus);
    expBfp(&eMinus);

    // Do rest calculations
    subBfp(&ePlus, &eMinus);
    divInt(&ePlus, 2);

    // Assing result
    initBFP(value, &ePlus);
}
