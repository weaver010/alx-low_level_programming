#include"main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s:the first string
 * @accept:the second string
 * Return:n
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, h;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (h = 0; accept[h] != s[i]; h++)
		{
			if (accept[h] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
