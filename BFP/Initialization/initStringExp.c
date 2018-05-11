#include "Initialization.h"

void initStringExp(bfp* target, char* source, int exponent)
{
    initString(target, source);
    target->exponent += exponent;
}
