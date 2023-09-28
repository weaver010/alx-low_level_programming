#include"main.h"
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index>63)
{
return(-1);
}
else
{
    *n = ((((*n&0)|1) << index) |*n );
   return(1);
}
}
