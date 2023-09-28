#include"main.h"
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index>63)
{
return(-1);
}
else
{

    return(*n = ~((1UL << index) | *n));
}
}
