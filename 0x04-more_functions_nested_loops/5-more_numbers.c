#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *Return: void
 *
 *
 *
 *
 *
 */
void more_numbers(void)
{
	int n;
	int ld;
	int r;
	int i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				ld = i % 10;
				r = i / 10;
				_putchar(r + '0');
				_putchar(ld + '0');
			}
			else
			{
				_putchar(i + '0');
			}
		}
	}
}
