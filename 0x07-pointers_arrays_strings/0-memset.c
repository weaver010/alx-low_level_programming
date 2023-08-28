#include"main.h"
/**
 * *_memset -  function that fills memory with a constant byte
 * @s:the area
 *@b:the constant byte
 *@n: the size
 *Return:s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n && s[i] <= '\0'; i++)
	{
		s[i] = b;
	}
	return (s);
}
