#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strncat - Write a function that concatenates two strings
 * @dest:the destination
 *@src:the source
 *@n:the bytes
 *Return:dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
