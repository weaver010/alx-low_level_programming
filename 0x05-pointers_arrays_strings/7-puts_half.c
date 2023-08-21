#include "main.h"
/**
 *puts_half - prints half of a string, followed by a new line
 *@str:the string
 *Return:void
 *
 *
 *
 *
 *
 *
 */
void puts_half(char *str)
{
	int i, l;

	l = strlen(str) / 2;
	for (i = 0; i <= l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
