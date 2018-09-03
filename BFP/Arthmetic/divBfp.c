#include "arthmetic.h"
#include "comparsion.h"
#include "Initialization.h"
#include <stdbool.h>

void divBfp(bfp* value1, bfp* value2)
{
    bfp tempVal1, tempVal2, resultTemp, result;

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
    else if((isZero(value1) && isZero(value2)))
    {
        // Inf
        value1->separatorPlace = 1;
        value1->sign = 1;
        // In Inf we should make sure every value will be zero
        for(int i = 0; i < bfpSignificantArraySize; i++)
        {
            value1->significant[i] = 0;
        }
        return;

    }
    else if(isPositiveInf(value1) || isNegativeInf(value2) || isNegativeInf(value1) || isPositiveInf(value2))
    {
        value1->exponent = bfpExponentMaxValue;
        // NaN should have at least one digit different than 0
        value1->significant[0] = 1;
        return;
    }
    else if(isZero(value2))
    {
        value1->exponent = bfpExponentMaxValue;
        // NaN should have at least one digit different than 0
        value1->significant[0] = 1;
        return;
    }
    // End of NaN and Inf combinations

    initZero(&result);
    // If signs are same, result will be positive
    if(value1->sign == value2->sign)
    {
        result.sign = 0;
    }
    else
    {
        result.sign = 1;
    }

    // Subtract exponents
    int sum = value1->exponent - value2->exponent;

    // Check if we have Inf
    if(value1->exponent > 0 && value2->exponent < 0)
    {
        if(sum < value1->exponent && sum < value2->exponent)
        {
            // NaN or Inf
            value1->separatorPlace = 1;
            value1->exponent = bfpExponentMaxValue;
            // In Inf we should make sure every value will be zero
            for(int i = 0; i < bfpSignificantArraySize; i++)
            {
                value1->significant[i] = 0;
            }
            return;
        }
    }
    else if(value1->exponent > 0 && value2->exponent < 0)
    {
        if(sum > value1->exponent && sum > value2->exponent)
        {
            // NaN or Inf
            value1->separatorPlace = 1;
            value1->exponent = bfpExponentMinValue;
            // In Inf we should make sure every value will be zero
            for(int i = 0; i < bfpSignificantArraySize; i++)
            {
                value1->significant[i] = 0;
            }
            return;
        }
    }

    // If we haven't Inf, let's go
    result.exponent = sum;

    initBFP(&tempVal1, value1);
    initBFP(&tempVal2, value2);
    tempVal1.sign = 0;
    tempVal1.exponent = 0;
    tempVal2.sign = 0;
    tempVal2.exponent = 0;

    for(int i = 0; i < bfpSignificantArraySize;)
    {
        // If subtraction is possible, do it
        if(greatherBfp(&tempVal1, &tempVal2) == 1 || equalBfp(&tempVal1, &tempVal2) == 1)
        {
            result.significant[i]++;

            // Subtract values
            initZero(&resultTemp);
            for(int j = bfpSignificantArraySize - 1; j >= 0; j--)
            {
                // += because there might be -1, because borrow in if in this loop
                resultTemp.significant[j] += tempVal1.significant[j] - tempVal2.significant[j];

                // If there was borrow from current value and it's lower than 0, borrow from previous one
                if(resultTemp.significant[j] < 0 && j > 0)
                {
                    resultTemp.significant[j-1]--;
                    resultTemp.significant[j] += 10;
                }
            }

            // Assing resultTemp to tempVal1
            for(int j = 0; j < bfpSignificantArraySize; j++)
            {
                tempVal1.significant[j] = resultTemp.significant[j];
            }
        }
        else
        {
            // Shift right second value
            for(int j = bfpSignificantArraySize - 1; j >= 0; j--)
            {
                if(j != 0)
                {
                    tempVal2.significant[j] = tempVal2.significant[j-1];
                }
                else
                {
                    tempVal2.significant[j] = 0;
                }
            }
            // Increment iterator
            i++;
        }
    }

    // Assing result to value1
    initBFP(value1, &result);
    normalization(value1);


}
