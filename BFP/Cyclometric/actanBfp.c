#include "Cyclometric.h"
#include "Initialization.h"
#include "arthmetic.h"

void actanBfp(bfp* value)
{
    // Use relationships among the inverse trigonometric functions
    bfp pi;
    initString(&pi, bfpPi);
    divInt(&pi, 2);

    atanBfp(value);

    subBfp(&pi, value);
    initBFP(value, &pi);
}
