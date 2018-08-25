#include "Cyclometric.h"
#include "comparsion.h"
#include "Initialization.h"
#include "arthmetic.h"

void atan2Bfp(bfp* value1, bfp* value2)
{
    bfp zero;
    bfp division;
    bfp pi, piDiv2;

    initZero(&zero);
    initString(&pi, bfpPi);
    initString(&piDiv2, bfpPi);
    divInt(&piDiv2, 2);

    if(greatherBfp(value2, &zero))
    {
        initBFP(&division, value1);
        divBfp(&division, value2);
        atanBfp(&division);
        initBFP(value1, &division);

    }
    else if(lessBfp(value2, &zero) && (greatherBfp(value1, &zero) || isZero(value1)))
    {
        initBFP(&division, value1);
        divBfp(&division, value2);
        atanBfp(&division);
        addBfp(&division, &pi);
        initBFP(value1, &division);
    }
    else if(lessBfp(value2, &zero) && lessBfp(value1, &zero))
    {
        initBFP(&division, value1);
        divBfp(&division, value2);
        atanBfp(&division);
        subBfp(&division, &pi);
        initBFP(value1, &division);
    }
    else if(isZero(value2) && greatherBfp(value1, &zero))
    {
        initBFP(value1, &piDiv2);
    }
    else if(isZero(value2) && lessBfp(value1, &zero))
    {
        initBFP(value1, &piDiv2);
        negBfp(value1);
    }
    else
    {
        // NaN
        value1->exponent = bfpExponentMaxValue;
        // NaN should have at least one digit different than 0
        value1->significant[0] = 1;
    }
}
