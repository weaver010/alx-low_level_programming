#include "main.h"
/**
 * times_table - print 9 time table
 * @
 *
 *
 *
 *
 *Return: void
 *
 */
void times_table(void)
{
	int l_d;
	int r;
	int n;
	int i;

	for (n = 0; n <= 9; n++)
	{
		if (n > 0)
		{
			_putchar('\n');
		}
		for (i = 0; i <= 9; i++)
		{
			if ((n * i) >= 10)
			{
				l_d = (n * i) % 10;
				r = (n * i) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(r + '0');
				_putchar(l_d + '0');
			}
			else
			{
				if (i != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((n * i) + '0');
			}
		}
	}
	_putchar('\n');
}
