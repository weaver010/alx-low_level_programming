#include"main.h"
/**
 *puts2 -  prints every other character of a string
 *starting with the first character
 *@str: the string
 *Return:void
 *
 *
 *
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < istrlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
