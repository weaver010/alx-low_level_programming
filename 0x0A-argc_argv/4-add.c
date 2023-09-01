#include<stdio.h>
#include<stdlib.h>
/**
 * main-entry point
 * @argc:size
 * @argv:array
 * Return:0
 *
 */
int main(int argc,char *argv[])
{
int i,sum = 0;
if (argc == 1)
{
printf("0");
}
else
{
for(i = 1; i < argc; i++)
{
if (!(*argv[i] >= '0'&& *argv[i] <= '9'))
{
printf("Error");
printf("\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
}
return (0);
}
