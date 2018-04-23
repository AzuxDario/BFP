#include "BFP.h"

void negBfp(bfp* value)
{
    value->number[signPosition] ^= 0x80;
}
