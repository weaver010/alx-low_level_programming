#include<stdio.h>
#include"function_pointers.h"
/**
 * print_name- prints a name
 * @name: name of the person
 * @f:the p func
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if(name)
{
f(name);
}
}
