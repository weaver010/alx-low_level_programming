#include "main.h"
/**
 * print_number - Write a function that prints an integer
 * @n:the number
 * Return:void
 *
 *
 *
 *
 */
void print_number(int n)
{
	if (n >= 10)
	{
		print_number(n / 10);
	}
	if (n < 0)
	{
		n = -n;
		_putchar('-');
		print_number(n / 10);
	}
	_putchar((n % 10) + 48);
}
