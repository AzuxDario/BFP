#include "arthmetic.h"
#include "Initialization.h"

void doubleFactInt(bfp* value1, unsigned int value2)
{
    initString(value1, "1");
    if(value2 == 0 || value2 == 1)
    {
        return;
    }
    else if(value2 == 2)
    {
        initString(value1, "2");
    }
    else
    {
        if(value2 % 2 == 1)
        {
            for(unsigned int i = 1; i <= value2; i+=2)
            {
                mulInt(value1, (int) i);
            }
        }
        else
        {
            for(unsigned int i = 2; i <= value2; i+=2)
            {
                mulInt(value1, (int) i);
            }
        }
    }
}
