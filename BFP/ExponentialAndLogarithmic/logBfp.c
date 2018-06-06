#include "ExponentialAndLogarithmic.h"
#include "Initialization.h"
#include "Power.h"
#include "arthmetic.h"
#include "math.h"

void logBfp(bfp* value)
{
    bfp result;
    bfp temp, zMinus1, zPlus1;
    double factor;

    initZero(&result);
    // Initialize value
    initBFP(&zMinus1, value);
    subInt(&zMinus1, 1);
    initBFP(&zPlus1, value);
    addInt(&zPlus1, 1);
    divBfp(&zMinus1, &zPlus1);

    for(int i = 0; i < 100; i++)
    {
        initBFP(&temp, &zMinus1);
        powInt(&temp, 2 * i + 1);
        factor = 1.0 / (2.0 * i + 1.0);
        mulDouble(&temp, factor);
        addBfp(&result, &temp);
    }
    mulInt(&result, 2);
    initBFP(value, &result);
}
