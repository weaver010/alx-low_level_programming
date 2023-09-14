#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print num
 * @separator:the separator
 * @n:the num of num
 * Return:void
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list s;
va_start(s, n);
for (i = 0; i < n; i++)
{
int o = va_arg(s, int);
printf("%d", o);
if (i < n - 1 && separator != NULL && n)
{
printf("%s", separator);
}
}
va_end(s);
printf("\n");
}
