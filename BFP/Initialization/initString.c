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
        if(source[i] == '-')
        {
            target->sign = 1;
            isSignDetected = true;
            continue;
        }
        else if(source[i] == '+')
        {
            target->sign = 0;
            isSignDetected = true;
            continue;
        }
        // If under index it separator set position of separator
        if(source[i] == '.')
        {
            isSeparatorDetected = true;
            target->separatorPlace = i;
            continue;
        }
        //Subtract 0x30 to change value in ascii code to number
        target->significant[position] = source[i] - 0x30;
        position++;
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
