#include "Trigonometry.h"
#include "Initialization.h"
#include "comparsion.h"
#include "arthmetic.h"
#include <math.h>

void cosBfp(bfp* value)
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
        exponent = 2 * i;
        initBFP(&dividend, &tempValue);
        powInt(&dividend, exponent);
        factInt(&divider, (unsigned int)exponent);
        divBfp(&dividend, &divider);
        mulDouble(&dividend, pow(sign, i));
        addBfp(&result, &dividend);
    }

    initBFP(value, &result);
}
