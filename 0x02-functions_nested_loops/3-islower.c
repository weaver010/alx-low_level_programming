#include "main.h"
/**
 * _islower - check if  char is lowercase
 * @c: the char was checked
 * Return: 1 (scusess),0 (failed)
 *
 *
 *
 *
 *
 *
 *
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
