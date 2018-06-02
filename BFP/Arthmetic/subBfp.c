#include "arthmetic.h"
#include "comparsion.h"
#include "Initialization.h"
#include "stdbool.h"

void subBfp(bfp* value1, bfp* value2)
{
    bfp greather, lower, result;
    bool isNegative = false;

    // Handle NaN and Inf combinations
    if(isNaN(value1))
    {
        return;
    }
    else if(isNaN(value2))
    {
        initBFP(value1, value2);
        return;
    }
    else if((isPositiveInf(value1) && isNegativeInf(value2)) || (isNegativeInf(value1) && isPositiveInf(value2)))
    {
        value1->exponent = bfpExponentMaxValue;
        // NaN should have at least one digit different than 0
        value1->significant[0] = 1;
        return;
    }
    // End of NaN and Inf combinations

    // If value2 is zero, there's nothing to do
    if(isZero(value2))
    {
        return;
    }

    // If value1 is zero, just copy is needed
    if(isZero(value1))
    {
        initBFP(value1, value2);
        // Negate value because it's subtraction
        negBfp(value1);
    }

    initZero(&result);

    // If both are negative or positive
    if(value1->sign == value2->sign)
    {
        // Check sign
        if(value1->sign == 1)
        {
            isNegative = true;
        }
        // Now we work on asolute value
        absBfp(value1);
        absBfp(value2);

        // Check value is greather
        if(greatherBfp(value1, value2) == 1)
        {
            initBFP(&greather, value1);
            initBFP(&lower, value2);
            // When first value was higher and was negative, result should be negative
            if(isNegative == true)
            {
                result.sign = 1;
            }
        }
        else
        {
            initBFP(&greather, value2);
            initBFP(&lower, value1);
            // When second value was higher and was positive, result should be negative
            if(isNegative == false)
            {
                result.sign = 1;
            }
        }

        // Make exponent equals
        while(lower.exponent < greather.exponent)
        {
            // Shift right
            for(int i = bfpSignificantArraySize - 1; i >= 0; i--)
            {
                if(i != 0)
                {
                    lower.significant[i] = lower.significant[i-1];
                }
                else
                {
                    lower.significant[i] = 0;
                }
            }
            lower.exponent++;
        }

        result.exponent = greather.exponent;
        result.separatorPlace = greather.separatorPlace;

        // Subtract values
        for(int i = bfpSignificantArraySize - 1; i >= 0; i--)
        {
            // += because there might be -1, because borrow in if in this loop
            result.significant[i] += greather.significant[i] - lower.significant[i];

            // If there was borrow from current value and it's lower than 0, borrow from previous one
            if(result.significant[i] < 0 && i > 0)
            {
                result.significant[i-1]--;
                result.significant[i] += 10;
            }
        }

        initBFP(value1, &result);
        normalization(value1);

        // Restore sign of value2
        if(isNegative == true)
        {
            value2->sign = 1;
        }
    }
    else
    {
        // Perform adding
        if(value1->sign == 0 && value2->sign == 1)
        {
            // Change sign to +
            value2->sign = 0;

            addBfp(value1, value2);
            // Restore sign
            value2->sign = 1;
        }
        //value1->sign == 1 && value2->sign == 0
        else
        {
            // Change sign to +
            value1->sign = 0;

            addBfp(value1, value2);
            // Restore sign
            value1->sign = 1;
        }

    }

    if(isZero(value1) == 1)
    {
        value1->sign = 0;
    }

}
