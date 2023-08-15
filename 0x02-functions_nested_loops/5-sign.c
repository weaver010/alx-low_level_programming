#include "main.h"
/**
 * print_sign - print sign of input number
 * @n:the number
 *
 * Return: 1 for postive 0 for zero -1 for negtive
 *
 *
 *
 *
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
