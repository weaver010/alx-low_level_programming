#include "main.h"
/**
 * *_strcpy -  copies the string pointed to by src
 *@dest:the copy
 *@src:the source
 *Return:dest
 *
 *
 *
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i]!=src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

