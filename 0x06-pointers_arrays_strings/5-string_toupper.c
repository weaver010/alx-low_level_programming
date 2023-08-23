#include"main.h"
/**
 * *string_toupper - Write a function that changes all
 * lowercase letters of a string to uppercase
 * @str:the string
 * Return:void
 *
 *
 *
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < istrlen(str); i++)
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

