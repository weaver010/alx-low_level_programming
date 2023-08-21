#include "main.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@s:the string
 *Return:void
 *
 *
 *
 *
 */
void print_rev(char *s)
{
	int l;

	l = istrlen(s);
	for (; l > 0; l--)
	{
		_putchar(s[-1 + l]);
	}
	_putchar('\n');
}
