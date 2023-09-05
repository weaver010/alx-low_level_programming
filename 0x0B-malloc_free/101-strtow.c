#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*count - count word
*@s: string
*Return:k
*/
int count(char *s)
{
int k = 0, i, n;
n = strlen(s);
for (i = 0; i < n; i++)
{
if (s[i] != ' ')
{
k++;
}
}
return (k);
}
/**
 * **strtow - splits a string into words
 * @str: string
 * Return:s
 */
char **strtow(char *str)
{char **s, *o;
int i, n, k = 0, w, c = 0, b, t;
n = strlen(str);
w = count(str);
if (w == 0)
{
return (NULL);
}
s = malloc(sizeof(char *) * (w + 1));
if (s == NULL)
return (NULL);
for (i = 0; i <= n; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
t = i;
o =  malloc(sizeof(char) * (c + 1));
if (o == NULL)
return (NULL);
while (b < t)
*o++ = str[b++];
*o = '\0';
s[k] = o - c;
k++;
c = 0;
}
}
else if (c++ == 0)
b = i;
}
s[k] = NULL;
return (s);
}
