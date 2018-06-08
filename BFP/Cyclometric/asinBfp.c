#include "Cyclometric.h"
#include "arthmetic.h"
#include "comparsion.h"
#include "Initialization.h"
#include "Power.h"

void asinBfp(bfp* value)
{
    bfp one, minusOne, tempValue, result;
    bfp dividend, divider, z    ;

    initString(&one, "1");
    initString(&minusOne, "-1");
    initBFP(&tempValue, value);

    // Make value between -1 and 1
    if(tempValue.sign == 0)
    {
        while(greatherBfp(&tempValue, &one))
        {
            subBfp(&tempValue, &one);
        }
    }
    else
    {
        while(lessBfp(&tempValue, &minusOne))
        {
            addBfp(&tempValue, &one);
        }
    }

    initZero(&result);

    // Calculate using Taylor series
    addBfp(&result, &tempValue);
    for(int i = 1; i < 20; i++)
    {
        doubleFactInt(&dividend, (unsigned int)(2 * i - 1));
        doubleFactInt(&divider, (unsigned int)(2 * i));
        divBfp(&dividend, &divider);

        initBFP(&z, &tempValue);
        powInt(&z, 2 * i + 1);
        divInt(&z, 2 * i + 1);

        mulBfp(&z, &dividend);

        addBfp(&result, &z);
    }

    initBFP(value, &result);

}
