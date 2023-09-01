#include<stdio.h>
#include<stdlib.h>
/**
 * main-entry point
 * @argc:size
 * @argv:array
 * Return:0
 *
 */

int main(int argc, char *argv[])
{
int i, k, c = 0;
int a[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
k = atoi(argv[1]);
if (k < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5 && k > 0; i++)
{
while (k >= a[i])
{
k -= a[i];
c++;
}
}
printf("%d\n", c);
return (0);
}
