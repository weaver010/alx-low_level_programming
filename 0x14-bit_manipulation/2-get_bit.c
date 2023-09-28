#include"main.h"
/**
 * get_bit - get bit
 * @n:the n
 * @index:the index
 * Return:bits
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
else
{
return ((n >> index) & 1);
}
}
