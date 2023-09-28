#include"main.h"
/**
 *set_bit - set to 1
 * @n:the n
 *@index:the index
 *Return:1
 *
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
else
{
*n = ((((*n & 0) | 1) << index) | *n);
return (1);
}
}
