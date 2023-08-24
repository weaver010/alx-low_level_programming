#include "main.h"
/**
 * *leet - Write a function that encodes a
 * string into 1337.
 * @str: the string
 * Return:str
 *
 *
 *
 *
 *
 *
 */
char *leet(char *str)
{
	int i, t;
	char c[] = {'4', 'a', 'A', '3', 'e',
		'E', '0', 'O', 'o', '7', 't', 'T', '1', 'l', 'L'};
	for (i = 0; i < istrlen(str); i++)
	{
		for (t = 0;  t < 15; t++)
		{
			if (t % 3 == 2 && str[i] == c[t]
			&& str[i] >= 65 && str[i] <= 122)
			{
				str[i] = c[t - 2];
			}
			else if (t % 3 == 1 && str[i] == c[t]
					&& str[i] >= 65 && str[i] <= 122)
			{
				str[i] = c[t - 1];
			}
		}
	}
	return (str);
}
