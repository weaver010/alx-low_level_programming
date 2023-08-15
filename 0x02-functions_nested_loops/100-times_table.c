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

	i = 0;
	j = 0;
	if (n <= 15 && n >= 0)
	{
		while (i < n)
		{
			if (n > 0)
			{
				_putchar('\n');
			}
			while (j < n)
			{
				if ((i * j) >= 10)
				{
					l_d = (i * j) % 10;
					r = (i * j) / 10;
					_putchar(r);
					_putchar(l_d);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar((i * j));
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				j++;
			}
			i++;
		}
	}
}
