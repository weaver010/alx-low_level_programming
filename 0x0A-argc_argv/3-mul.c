#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main-entry point
 * @argc:size
 * @argv:array
 * Return:0
 *
 */
int main(int argc, char* argv[])
{
int i,m = 1;
for (i = 1; i < argc; i++)
{
m *= atoi(argv[i]);
}
if (argc == 2)
{	
printf("%d", m);
}
else
{
printf("Error");
}
return (0);
}
