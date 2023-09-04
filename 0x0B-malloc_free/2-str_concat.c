#include <stdio.h>
#include<stdlib.h>
#include <string.h>
/**
 *  *str_concat - function that concatenates two strings
 *  @s1:the string
 *  @s2:the string
 *  Return:o
 */
char *str_concat(char *s1, char *s2)
{int i, n, k;
char *o;
if (s1 == NULL && s2 == NULL)
{
s1 = "";
s2 = "";
}
else if (s2 == NULL)
{
s2 = "";
}
else if (s1 == NULL)
{
s1 = "";
}
k = strlen(s1);
n = strlen(s1) + strlen(s2) + 1;
o = malloc(n);
if (o == NULL)
{
return (NULL);
}
for (i = 0; i < k; i++)
{
o[i] = s1[i];
}
for (i = strlen(s1); i <= n; i++)
{o[i] = s2[(i - strlen(s1))]; }
return (o); }
