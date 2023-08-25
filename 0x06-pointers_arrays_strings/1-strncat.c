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
 * *_strncat - Write a function that concatenates two strings
 * @dest:the destination
 *@src:the source
 *@n:the bytes
 *Return:dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, l, u;

	l = sr(dest) + sr(src);
	u = 0;
	if (n >= l)
	{
		for (i = sr(dest); i < l; i++)
		{
			dest[i] = src[u];
			u++;
		}
	}
	else
	{
		for (i = sr(dest); u < n; i++)
		{
			dest[i] = src[u];
			u++;
		}
	}
	return (dest);
}
