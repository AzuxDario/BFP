#include "arthmetic.h"
#include "Initialization.h"

void factInt(bfp* value1, unsigned int value2)
{
    initString(value1, "1");
    if(value2 == 0 || value2 == 1)
    {
        return;
    }
    else
    {
        for(unsigned int i = 1; i <= value2; i++)
        {
            mulInt(value1, (int) i);
        }
    }
}
