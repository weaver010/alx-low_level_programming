#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc:the size
 * @argv:the array
 * Return:0
 */
int main(int argc, char *argv[])
{int b, i;
char *s;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
b = atoi(argv[1]);
if (b < 0)
{
printf("Error\n");
exit(2);
}
s = (char *)main;
for (i = 0; i < b; i++)
{
if (i == b - 1)
{
printf("%02hhx\n", s[i]);
break;
}
printf("%02hhx ", s[i]);
}
return (0);
}
