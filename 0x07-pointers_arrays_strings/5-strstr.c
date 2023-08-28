#include"main.h"
/**
 * *_strstr -  function that locates a substring
 * @haystack:the string
 * @needle:the second string
 * Return:s
 *
 *
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, o = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[o] == haystack[i])
		{
			return (&haystack[i]);
		}
	}
	return (&haystack[i]);
}
