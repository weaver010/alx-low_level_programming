#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include<stdlib.h>
/**
 * check-entry point
 * @a:the array
 * Return:1
 *
 */
int check(char *a)
{
size_t i;
for (i = 0; i < strlen(a); i++)
{
if (!isdigit(a[i]))
{
return (0);
}
}
return (1);
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
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
if (check(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error");
printf("\n");
return (1);
}
}
printf("%d\n", sum);
}
return (0);
}
