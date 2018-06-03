#include "Trigonometry.h"
#include "Initialization.h"
#include "arthmetic.h"

void ctanBfp(bfp* value)
{
    bfp sin, cos;
    initBFP(&sin, value);
    initBFP(&cos, value);

    sinBfp(&sin);
    cosBfp(&cos);

    initBFP(value, &cos);
    divBfp(value, &sin);

}
