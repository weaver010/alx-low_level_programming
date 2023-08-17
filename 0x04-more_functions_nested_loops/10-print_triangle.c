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
			for (n = size; n > i; n--)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
