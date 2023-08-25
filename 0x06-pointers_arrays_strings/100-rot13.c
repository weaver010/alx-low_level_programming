#include"main.h"
/**
 * *rot13 - function that encodes a string using rot13.
 * @str:the string
 *Return:str
 *
 *
 *
 *
 *
 */
char *rot13(char *str)
{
	int i, t;
	char a[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (t = 0; t < sr(b); t++)
		{
			if (str[i] == b[t])
			{
				str[i] = a[t];
				break;
			}
		}
	}
	return (str);
}
