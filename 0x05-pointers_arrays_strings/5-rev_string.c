#include "main.h"
/**
 *rev_string - prints a string, in reverse, followed by a new line.
 *@s:the string
 *Return:void
 *
 *
 *
 *
 */
void rev_string(char *s)
{
	int p, l, i;
	char t;

	i = 0;
	l = istrlen(s);
	for (p = istrlen(s) / 2; p != 0; p--)
	{
		t = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = t;
		i++;
	}
}
