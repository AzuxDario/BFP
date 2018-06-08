#include "Cyclometric.h"
#include "Initialization.h"
#include "arthmetic.h"

void acosBfp(bfp* value)
{
    // Use relationships among the inverse trigonometric functions
    bfp pi;
    initString(&pi, bfpPi);
    divInt(&pi, 2);

    asinBfp(value);

    subBfp(&pi, value);
    initBFP(value, &pi);
}
