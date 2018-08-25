#include "Cyclometric.h"
#include "Initialization.h"
#include "arthmetic.h"

void actanBfp(bfp* value)
{

    // Use relationships among the inverse trigonometric functions
    bfp pi;
    initString(&pi, bfpPi);
    if(value->sign == 1)
    {
        pi.sign = 1;
    }
    divInt(&pi, 2);

    atanBfp(value);

    subBfp(&pi, value);
    initBFP(value, &pi);
}
