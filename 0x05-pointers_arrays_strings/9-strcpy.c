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
char *_strcp(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

