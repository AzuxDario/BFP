#include "Conversion.h"


char* toString(bfp* value, unsigned int precision)
{
    char* result;
    unsigned int indexOfResult = 0;
    unsigned int indexOfValue = 0;
    unsigned int sizeOf = 0;

    // If value is higher or equal 1.
    if(value->exponent >= 0)
    {
        // Alloc memory.
        sizeOf = value->exponent + 4; // For sign (if exist), '0', '.' and '\0'
        result = malloc(sizeof(char) * sizeOf);
        // Check sign.
        if(value->sign == 1)
        {
            result[indexOfResult] = '-';
            indexOfResult++;
        }
        // Print values to result.
        for(int i = 0; i <= value->exponent; i++)
        {
            if(i < bfpSignificantArraySize)
            {
                result[indexOfResult] = value->significant[i] + 0x30;
            }
            else
            {
                result[indexOfResult] = '0';
            }
            indexOfResult++;
            indexOfValue++;
        }

        // Add separator
        if(precision > 0)
        {
            result[indexOfResult++] = '.';
        }

        // Realloc memory to make space for value after separator
        realloc(result, sizeof(char) * (sizeOf + precision));

        for(unsigned int i = 0; i < precision; i++)
        {
            if(indexOfValue < bfpSignificantArraySize)
            {
                result[indexOfResult] = value->significant[indexOfValue] + 0x30;
            }
            else
            {
                result[indexOfResult] = '0';
            }
            indexOfResult++;
            indexOfValue++;
        }

        result[indexOfResult++] = '\0';
    }
    // If value is lower than 1.
    else
    {
        // Alloc memory.
        sizeOf = 4; // For sign (if exist), '0', '.' and '\0'
        result = malloc(sizeof(char) * sizeOf);
        // Check sign.
        if(value->sign == 1)
        {
            result[indexOfResult] = '-';
            indexOfResult++;
        }
        result[indexOfResult] = '0';
        indexOfValue++;
        indexOfResult++;

        // Add separator
        if(precision > 0)
        {
            result[indexOfResult++] = '.';
        }
        // Add zeros as much as exponent
        for(int i = 0; i < -(value->exponent + 1); i++)
        {
            result[indexOfResult++] = '0';
            precision--;
        }

        // Print values to result.
        for(unsigned int i = 0; i < precision; i++)
        {
            if(i < bfpSignificantArraySize)
            {
                result[indexOfResult] = value->significant[i] + 0x30;
            }
            else
            {
                result[indexOfResult] = '0';
            }
            indexOfResult++;
            indexOfValue++;
        }

        result[indexOfResult++] = '\0';
    }



    return result;

}
