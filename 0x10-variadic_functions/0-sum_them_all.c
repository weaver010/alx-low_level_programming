#include <stdio.h>
#include<stdarg.h>
/**
 * sum_them_all - returns the sum
 * @n:the num of num
 * Return:sum
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{int sum = 0, o, i;
va_list u;
va_start(u, n);
if (n == 0)
{
return (0);
}
else
{
for (i = 0; i < n; i++)
{
o = va_arg(u, int);
sum = sum + o;
}
va_end(u);
return (sum);
}
}
