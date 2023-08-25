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
 * *cap_string - Write a function that capitalizes
 * all words of a string.
 * @str:the string
 * Return:str
 *
 *
 *
 *
 *
 */
char *cap_string(char *str)
{
	int i, t;
	char b[] = {9, ',', 34, '?',
'.', ';', '!', '(', ')', '{', '}', ' ', '\n'};

	for (i = 0; i < sr(str); i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		else
		{
			for (t = 0; t < sr(b); t++)
			{
				if (str[i] == b[t] && str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
