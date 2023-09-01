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
 * *_strncpy - Write a function that copies a string.
 * @dest: the destnation
 * @src:the source
 * @n: the byte
 *Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i <= sr(src))
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}

