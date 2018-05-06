#include "Initialization.h"

void initString(bfp* target, char* source)
{
    int i, position = 0;

    // Assing zero
    initZero(target);

    // Assing value
    for(i = 0; i <= bfpSignificantArraySize; i++)
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
            continue;
        }
        else if(source[i] == '+')
        {
            target->sign = 0;
            continue;
        }
        // If under index it separator set position of separator
        if(source[i] == '.')
        {
            target->separatorPlace = (char)i;
            continue;
        }
        target->significant[position] = source[i];
        position++;
    }

    // Normalize
}
