#include "main.h"
/**
 *  _isalpha - check char if lower or upper
 *
 * @c:the char for check
 *
 * Return: 1 (sucsess) or 0 (failed)
 */
int _isalpha(int c)
{
	if (c <= 122 && c >= 97 || c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
