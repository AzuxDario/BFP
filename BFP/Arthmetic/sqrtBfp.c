#include "arthmetic.h"
#include "Initialization.h"

void sqrtBfp (bfp* value1)
{
    bfp half, XCurrent, S;
    initString(&half, "0.5");
    initBFP(&XCurrent, value1);

    // When you do square root of negative value
    if(value1->sign == 1)
    {
        //You get NaN
        value1->exponent = bfpExponentMaxValue;
        // Set at least one value to make sure it'll be NaN not Inf
        value1->significant[0] = 1;
        return;
    }

    // 12 iterations because it give 3 when you compute sqrt(9)
    for(int i = 0; i < 12; i++)
    {
        // Assing first value to S
        initBFP(&S, value1);

        if(i == 0)
        {
            initBFP(&XCurrent, value1);
        }
        else
        {
            //initBFP(&XCurrent, &XNext);
        }

        // Divide S by current X
        divBfp(&S, &XCurrent);

        // Add S/x0 to x0
        addBfp(&XCurrent, &S);

        // Multiply x0 with 1/2
        mulBfp(&XCurrent, &half);

        // Assign next value
        //initBFP(&XNext, &XCurrent);
    }

    initBFP(value1, &XCurrent);
}
