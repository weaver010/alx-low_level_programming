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
			if (n > 0)
			{
				_putchar('\n');
			}
			for (j=0; j <= n; j++)
			{
				if ((i * j) >= 10)
				{
					l_d = (i * j) % 10;
					r = (i * j) / 10;
					_putchar(r + '0');
					_putchar(l_d + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar((i * j) + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
	}
}
