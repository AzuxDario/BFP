#include "BFP.h"

void absBfp(bfp* value)
{
    value->number[signPosition] &= 0x7F;
}
