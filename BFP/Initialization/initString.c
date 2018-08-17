#include "Initialization.h"
#include <stdbool.h>

void initString(bfp* target, char* source)
{
    int position = 0;
    bool isSeparatorDetected = false;
    bool isSignDetected = false;
    // Assing zero
    initZero(target);

    // Assing value
    for(int i = 0; i <= bfpSignificantArraySize; i++)
    {
        // If undex index is \0 end assigning
        if(source[i] == '\0')
        {
            break;
        }
        // If sing is detected
        if(source[i] == '-' && i == 0)
        {
            target->sign = 1;
            isSignDetected = true;
            continue;
        }
        else if(source[i] == '-' && i != 0)
        {
            // NaN
            target->exponent = bfpExponentMaxValue;
            // NaN should have at least one digit different than 0
            target->significant[0] = 1;
            return;
        }
        else if(source[i] == '+' && i == 0)
        {
            target->sign = 0;
            isSignDetected = true;
            continue;
        }
        else if(source[i] == '+' && i != 0)
        {
            // NaN
            target->exponent = bfpExponentMaxValue;
            // NaN should have at least one digit different than 0
            target->significant[0] = 1;
            return;
        }
        // If under index it separator set position of separator
        if(source[i] == '.' && isSeparatorDetected == false)
        {
            isSeparatorDetected = true;
            target->separatorPlace = i;
            continue;
        }
        else if(source[i] == '.' && isSeparatorDetected == true)
        {
            // NaN
            target->exponent = bfpExponentMaxValue;
            // NaN should have at least one digit different than 0
            target->significant[0] = 1;
            return;
        }
        //Subtract 0x30 to change value in ascii code to number
        if(source[i] >= '0' && source[i] <= '9')
        {
            target->significant[position] = source[i] - 0x30;
            position++;
        }
        else if(source[i] < '0' || source[i] > '9')
        {
            // NaN
            target->exponent = bfpExponentMaxValue;
            // NaN should have at least one digit different than 0
            target->significant[0] = 1;
            return;
        }
    }

    // Subtract from separator place 1 when sign was detected
    if(isSignDetected == true)
    {
        target->separatorPlace--;
    }

    // Check position of separator
    if(isSeparatorDetected == false)
    {
        target->separatorPlace = position;
    }
    // Normalize
    normalization(target);
}
