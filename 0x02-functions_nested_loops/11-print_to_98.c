#include "main.h"
#include<stdio>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n : the input
 * Return:void
 *
 *
 *
 *
 *
 *
 *
 */
void print_to_98(int n)
{

	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	_putchar('\n');
}
