#include "BFP.h"

void negBfp(bfp* value)
{
    value->sign ^= 0x01;
}
