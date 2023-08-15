#include "main.h"
/**
 * print_last_digit - return last digit of input
 * @n : the input
 * Return: the last digit value of input
 *
 *
 *
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar((n + 48));
	return (n);
}
