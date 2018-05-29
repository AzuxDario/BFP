#include "BFP.h"
#include "comparsion.h"
#include "Initialization.h"

void addBfp(bfp* value1, bfp* value2)
{
    bfp greather, lower;
    char carriage = 0;
    char sign;

    // If value2 is zero, there's nothing to do
    if(isZero(value2))
    {
        return;
    }

    // If value1 is zero, just copy is needed
    if(isZero(value1))
    {
        initBFP(value1, value2);
    }

    // Values are both positive or negative
    if(value1->sign == value2->sign)
    {
        if(greatherBfp(value1, value2) == 1)
        {
            // First is greather
            initBFP(&greather, value1);
            initBFP(&lower, value2);
        }
        else
        {
            // Second is greather
            initBFP(&greather, value2);
            initBFP(&lower, value1);
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

        // Add values
        for(int i = bfpSignificantArraySize - 1; i >= 0; i--)
        {
            // Add values and carry
            greather.significant[i] += lower.significant[i];
            greather.significant[i] += carriage;
            // Clear carry
            carriage = 0;

            // If value is higher than 9
            if(greather.significant[i] > 9)
            {
                greather.significant[i] -= 10;
                carriage = 1;
            }
        }

        // We have value more than 9 in first position, we have to shift right once
        if(carriage == 1)
        {
            // This loop is doing shift left of whole significant.
            // -1 to avoid take value out of scope.
            for(int i = bfpSignificantArraySize - 1; i > 0; i--)
            {
                greather.significant[i] = greather.significant[i-1];
            }
            greather.exponent++;

            // Assign carry.
            greather.significant[0] = carriage;
            carriage = 0;

        }

        // Value should be already normalized thanks to decrement exponent
        // Assing returned value
        initBFP(value1, &greather);

    }
    else
    {
        // Values have different signs do subtraction
    }

}
