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
 * _strcmp - Write a function that compares two strings.
 *@s1:the first string
 *@s2:the second string
 *Return: the diffrence
 *
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i, a;

	for (i = 0; i < sr(s1) + sr(s2); i++)
	{
		if (s1[i] != s2[i])
		{
			a = i;
			break;
		}
		else if (i == sr(s1) - 1)
		{
			a = i;
		}
	}
	return (s1[a] - s2[a]);
}
