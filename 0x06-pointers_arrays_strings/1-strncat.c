#include"main.h"
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

	l = istrlen(dest) + istrlen(src);
	u = 0;
	if (n >= l)
	{
		for (i = istrlen(dest); i < l; i++)
		{
			dest[i] = src[u];
			u++;
		}
	}
	else
	{
		for (i = istrlen(dest); u < n; i++)
		{
			dest[i] = src[u];
			u++;
		}
	}
	return (dest);
}
