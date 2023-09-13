#include<stdio.h>
#include"3-calc.h"
#include<stdlib.h>
/**
 * main - entry
 * @argc: The size
 * @argv: The array
 * Return:func
 */
int main(int argc, char *argv[])
{int a, b;
char *s;
int (*get_op_func(char *s))(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
s = argv[2];
if (get_op_func(s) == NULL || s[1] != '\0')
{
printf("Error\n");
exit(99);
}
if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(argv[2])(a, b));
return (0);
}
