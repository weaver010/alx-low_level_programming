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

	l = istrlen(str);
	if (l % 2 == 0)
	{
		for (i = istrlen(str) / 2; i <= l ; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (l / 2) + 1; i <= l ; i++)
		{
			_putchar(str[i]);
		}
	}
}
