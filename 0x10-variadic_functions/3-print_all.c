#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - printf
 * @format:format
 * Return:void
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *s, *separator = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 's':
s = va_arg(list, char *);
if (!s)
s = "(nil)";
printf("%s%s", separator, s);
break;
case 'i':
printf("%s%d", separator, va_arg(list, int));
break;
case 'c':
printf("%s%c", separator, va_arg(list, int));
break;
case 'f':
printf("%s%f", separator, va_arg(list, double));
break;
default:
i++;
continue;
}
separator = ", ";
i++;
}
}
printf("\n");
va_end(list);
}
