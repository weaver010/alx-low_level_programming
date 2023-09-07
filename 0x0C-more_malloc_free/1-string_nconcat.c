#include<string.h>
#include <stdlib.h>
/**
 *  *string_nconcat -  that concatenates two strings
 *  @s1:the 1th string
 * @s2:the 2th string
 *@n:num of byte
 * Return:pointer
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, o = 0;
char *s;
if (s1 == NULL && s2 == NULL)
{
s1 = "";
s2 = "";
}
else if (s1 == NULL)
{
s1 = "";
}
else if (s2 == NULL)
{
s2 = "";
}
if (n >= strlen(s2))
{
n = strlen(s2);
}
s = malloc(strlen(s1) + n + 1);
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < strlen(s1); i++)
{
s[i] = s1[i];
}
for (j = strlen(s1); j < strlen(s1) + n; j++)
{
s[j] = s2[o];
o++;
}
s[j]='\0';
return (s);
}
