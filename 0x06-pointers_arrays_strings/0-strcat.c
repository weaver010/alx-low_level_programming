#include"main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: the destination
 *@src:the source
 *Return:dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, l, u;

	l = istrlen(dest) + istrlen(src);
	u = 0;
	for (i = strlen(dest); i < l; i++)
	{
		dest[i] = src[u];
		u++;
	}
	return (des)
}

