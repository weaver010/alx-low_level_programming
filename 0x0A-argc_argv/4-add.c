#include<stdio.h>
#include"main.h"
/**
 *_atoi - convert a string to an integer.
 *@s:the string
 *Return:intger
 *
 *
 *
 */
int _atoi(char *s)
{
unsigned int n = 0;
int si = 1;
do {
if (*s == '-')
{
si *= -1;
}
else if (*s >= '0' && *s <= '9')
{
n = (n * 10) + (*s - '0');
}
else if (n > 0)
{
break;
}
} while (*s++);
return (n * si);
}
/**
 * main-entry point
 * @argc:size
 * @argv:array
 * Return:0
 *
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc == 1)
{
printf("0");
}
else
{
for (i = 1; i < argc; i++)
{
if (!(*argv[i] >= '0' && *argv[i] <= '9'))
{
printf("Error");
printf("\n");
return (1);
}
else
{
sum += _atoi(argv[i]);
}
}
printf("%d\n", sum);
}
return (0);
}
