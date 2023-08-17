#include "main.h"
/**
 *print_number- that prints an integer
 *@n:the number
 *Return:void
 *
 *
 *
 *
 *
 *
 *
 */
void print_number(int n)
{
	int i;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
