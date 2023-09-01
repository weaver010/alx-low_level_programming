#include"main.h"
#include<stdio.h>
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
return (n *si);
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
int i, m = 1;
for (i = 1; i < argc; i++)
{
m *= _atoi(argv[i]);
}
if (argc == 3)
{
printf("%d\n", m);
}
else
{
printf("Error");
printf("\n");
return (1);
}
return (0);
}
