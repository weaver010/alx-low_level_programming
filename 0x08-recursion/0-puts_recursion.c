#include"main.h"
/**
 * _puts_recursion - function that prints a string
 * @s:the string
 * Return:void
 *
 *
 *
 *
 */
void _puts_recursion(char *s)
{int i = 0;
if (s[i] != '\0')
{
_putchar(s[i]);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
