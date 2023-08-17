#include "main.h"
/**
 *print_triangle -  prints a triangle
 *@size:the size of triangle
 *Return:void
 *
 *
 *
 *
 *
 */
void print_triangle(int size)
{
	int n;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (n = i; n < size; n++)
			{
			_putchar(' ');
			}
			for (n = 1; n <= i; n++)
			{
				_putchar('#');
			}

		_putchar('\n');
		}
	}
}
