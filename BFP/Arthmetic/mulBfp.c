#include "arthmetic.h"
#include "Initialization.h"

void mulBfp(bfp* value1, bfp* value2)
{
    int temporaryResultSize = bfpSignificantArraySize * 2;
    char temporaryResult[bfpSignificantArraySize * 2];
    char carriage = 0;
    bfp result;

    for(int i = 0; i < temporaryResultSize; i++)
    {
        temporaryResult[i] = 0;
    }

    // If signs are same, result will be positive
    if(value1->sign == value2->sign)
    {
        result.sign = 0;
    }
    else
    {
        result.sign = 1;
    }

    // Add exponents
    result.exponent = value1->exponent + value2->exponent;

    // Go over all numbers
    for(int i = bfpSignificantArraySize; i >= 0; i--)
    {
        for(int j = bfpSignificantArraySize; j >= 0; j--)
        {
            temporaryResult[i + j] += value1->significant[j] * value2->significant[i];
        }

        for(int a = temporaryResultSize; a > 0; a--)
        {
            if(temporaryResult[a] > 9)
            {
                carriage = temporaryResult[a]/10;
                temporaryResult[a] -= carriage * 10;
                temporaryResult[a-1] += carriage;
                carriage = 0;
            }
        }
    }

    // After multiply we have on 0 position whole value before separator
    for(int i = temporaryResultSize; i >= 0; i--)
    {
        if(i != 0)
        {
            temporaryResult[i] = temporaryResult[i-1];
        }
        else
        {
            temporaryResult[i] = 0;
        }
    }

    // So we need to separate value on position 1 if it's higher than 9
    if(temporaryResult[1] > 9)
    {
        carriage = temporaryResult[1]/10;
        temporaryResult[1] -= carriage * 10;
        temporaryResult[0] += carriage;
        carriage = 0;
    }

    // Now we should set separator position
    result.separatorPlace = 2;

    // Copy result to bfp type
    for(int i = 0; i < bfpSignificantArraySize; i++)
    {
        result.significant[i] = temporaryResult[i];
    }

    // And normalize

    normalization(&result);

    initBFP(value1, &result);
}
