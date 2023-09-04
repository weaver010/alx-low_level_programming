#include <stdio.h>
#include<stdlib.h>
#include <string.h>
/**
 *  *_strdup - function that returns a pointer 
 * to a newly allocated space in memory,
 * which contains a copy of the string
 * given as a parameter.
 *  @str:the string
 *  Return:string
 */
char *_strdup(char *str)
{
int i,n = strlen(str);
char *o;
o = malloc(n);
if (n == 0 || o == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < n; i++)
{
o[i] = str[i];
}
return (o);
}
}