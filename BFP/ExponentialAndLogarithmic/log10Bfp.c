#include "ExponentialAndLogarithmic.h"
#include "Initialization.h"
#include "arthmetic.h"

void log10Bfp(bfp* value)
{
    char* log10BasedOnE = {"2.3025850929940456593778864365099851750817490440580261696000508189564878732699815976034914963508006078913165194855305767583636600438791685975908505410511426736846998755093157772969067823863514591989671098729992569572375634220"};
    bfp dividend, divider;

    initBFP(&dividend, value);
    initString(&divider, log10BasedOnE);

    logBfp(&dividend);
    divBfp(&dividend, &divider);
    initBFP(value, &dividend);
}
