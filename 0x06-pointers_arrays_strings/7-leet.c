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
	char c[] = {'4', '4', '3', '3', '0',
		'0', '7', '7', '1', '1'};
	char b[] = {'a', 'A', 'e', 'E', 'O', 'o',
		't', 'T', 'l', 'L'};
	for (i = 0; str[i] != '\0'; i++)
	{
		for (t = 0;  t < 10; t++)
		{
			if (str[i] == b[t])
			{
				str[i] = c[t];
			}

		}
	}
	return (str);
}
