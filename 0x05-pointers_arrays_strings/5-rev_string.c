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
        int l;

        l = istrlen(s);
        for (; l > 0; l--)
        {
                _putchar(s[-1 + l]);
        }
}
