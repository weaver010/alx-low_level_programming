#include "main.h"
/**
 *print_alphabet_x10 - print alpha x10
 *Return: void
 *
 *
 *
 *
 */
void print_alphabet_x10(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			if (c == 'z')
			{
				_putchar('\n');
			}
		}
	}
}

