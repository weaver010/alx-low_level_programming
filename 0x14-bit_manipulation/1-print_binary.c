#include"main.h"
/**
 * o - support
 * @c:the c
 * Return:void
 *
 *
 */
void o(unsigned long int c)
{
if (c > 0)
{
o(c >> 1);
_putchar((c & 1) + '0');
}
}
/**
 * print_binary - print binray
 * @n:the n
 * Return:void
 *
 *
 */
void print_binary(unsigned long int n)
{unsigned long int c = n;
o(c);
if (c == 0)
{
_putchar('0');
}
}
