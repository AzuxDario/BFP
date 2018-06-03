#include "Trigonometry.h"
#include "Initialization.h"
#include "arthmetic.h"
#include "comparsion.h"
#include "Power.h"
#include <math.h>

void sinBfp(bfp* value)
{
    bfp pi, tempValue, result;
    bfp dividend, divider;

    initString(&pi, bfpPi);
    initBFP(&tempValue, value);

    // Make value between -pi and pi
    if(tempValue.sign == 0)
    {
        while(greatherBfp(&tempValue, &pi))
        {
            subBfp(&tempValue, &pi);
        }
    }
    else
    {
        while(lessBfp(&tempValue, &pi))
        {
            addBfp(&tempValue, &pi);
        }
    }

    int sign = -1;
    int exponent = 0;
    initZero(&result);

    for(int i = 0; i < 20; i++)
    {
        exponent = 2 * i + 1;
        initBFP(&dividend, &tempValue);
        powInt(&dividend, exponent);
        factInt(&divider, (unsigned int)exponent);
        divBfp(&dividend, &divider);
        mulDouble(&dividend, pow(sign, i));
        addBfp(&result, &dividend);
    }

    initBFP(value, &result);
}
