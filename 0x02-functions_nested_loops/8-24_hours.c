#include "main.h"
/**
 * jack_bauer - print the every minute of the day of Jack Bauer
 * Return:void
 *
 *
 *
 */
void jack_bauer(void)
{
	int n;
	int i;
	int j;
	int k;

	for (n = 0; n <= 2; n++)
	{
		for (i = 0; i <= 3; i++)
		{
			for (j = 0; j <= 5; j++)
			{
				for (k = 0; k <= 9; k++)
				{
					_putchar(n + '0');
					_putchar(i + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(k + '0');
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
