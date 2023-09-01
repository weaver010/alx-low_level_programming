#include"main.h"
/**
 *sr -  returns the length of a string.
 *@s: the string.
 *Return:the length
 *
 *
 *
 *
 *
 *
 */
int sr(char *s)
{int i;

for (i = 0; s[i] != 0; i++)
{
}
return (i);
}
/**
 * *_strcat - function that concatenates two strings
 * @dest: the destination
 *@src:the source
 *Return:dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, l, u;

	l = sr(dest) + sr(src);
	u = 0;
	for (i = sr(dest); i < l; i++)
	{
		dest[i] = src[u];
		u++;
	}
	return (dest);
}

