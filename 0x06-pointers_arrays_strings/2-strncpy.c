#include"main.h"
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
		if (i <= istrlen(src))
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

