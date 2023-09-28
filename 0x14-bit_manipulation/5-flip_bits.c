#include"main.h"
/**
 * flip_bits - returns the number of bits ...
 * @n:the n
 *@m:the m
 * Return:p
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int c = 0, p = 0;
c = n ^ m;
while (c)
{
if (c & 1)
{
p++;
}
c = c >> 1;
}
return (p);
}
