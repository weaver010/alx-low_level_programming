#include"main.h"
/**
 * print_times_table - prints the n times table
 * @n:input
 * Return: void
 *
 *
 *
 *
 *
 */
void print_times_table(int n)
{
	int i;
	int l_d;
	int r;
	int j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j=0; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				if (((i * j) >= 10) && ((i * j) < 100))
				{
					_putchar(' ');
					l_d = (i * j) % 10;
					r = (i * j) / 10;
					_putchar(r + '0');
					_putchar(l_d + '0');
				}
				else if ((i * j) >= 100)
				{
					l_d = ((i * j) /10) % 10;
					r = (i * j) / 100;
					_putchar(r + '0');
					_putchar(l_d + '0');
				}
				else
				{
						_putchar(' ');
					_putchar((i * j) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
