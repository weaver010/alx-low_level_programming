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
        int l,i;

        i = 0;
	l = istrlen(s);
        for (; l > 0; l--)
        {
                s[i] = s[-1 + l]);
		i++;
        }
}
