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


/**
 *_strlen - entry point
 *@s: the string.
 *Return: the length
 *
 *
 *
 *
 *
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	return (i);
}
void print_rev(char *s)
{
	int l;

	l = _strlen(s);
	for (; l > 0; l--)
	{
		_putchar(s[-1 + l]);
	}
	_putchar('\n');
}
