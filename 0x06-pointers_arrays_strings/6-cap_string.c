#include"main.h"
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
	char b[] = {9, 32, 34, 125, 123, 44, 59, 64, 33, 63, 40, 41, '\n'};

	for (i = 0; i < istrlen(str); i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		else
		{
			for (t = 0; t < istrlen(b); t++)
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
