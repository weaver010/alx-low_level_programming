#include"main.h"
/**
 *clear_bit - set to 0
 * @n:the n
 *@index:the index
 *Return:1
 *
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
else
{
*n = (~(((*n & 0) | 1) << index) & *n);
return (1);
}
}
