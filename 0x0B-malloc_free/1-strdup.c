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

char *o;
int n, i;
if (!str)
{
return (NULL);
}
n = strlen(str);
o = malloc(n);
if (o == NULL)
{
return (NULL);
}

else
{
for (i = 0; i <= n; i++)
{
o[i] = str[i];
}
return (o);
}
}
