#include "main.h"
/**
 *print_most_numbers - prnit number except 2 4
 *Return: void
 *
 *
 *
 *
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
