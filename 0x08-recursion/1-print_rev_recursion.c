#include"main.h"
/**
 * _print_rev_recursion - that prints a string in reverse
 * @s:the string
 * Return:void
 *
 *
 *
 *
 *
 */
void _print_rev_recursion(char *s)
{int i = 0;
if (s[i] != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
