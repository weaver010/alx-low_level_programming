#include"main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s:the string
 * @accept:the word
 * Return:s
 *
 *
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, h;

	for (i = 0; s[i] > '\0'; i++)
	{
		for (h = 0; accept[h] != '\0'; h++)
		{
			if (s[i] == accept[h])
			{
				return (s + i);
			}
		}
	}
	return (s);
}

