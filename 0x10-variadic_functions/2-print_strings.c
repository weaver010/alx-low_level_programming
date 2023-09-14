#include <stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print str
 * @n:the num of num
 * @separator:the separator
 * Return:void
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list s;
va_start(s, n);
for (i = 0; i < n; i++)
{
char *o = va_arg(s, char*);
if (o)
{
printf("%s", o);
}
else
{
printf("(nil)");
}
if (i < n - 1 && separator != NULL && n)
{
printf("%s", separator);
}
}
va_end(s);
printf("\n");
}
