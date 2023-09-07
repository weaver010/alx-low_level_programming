#include<stdlib.h>
/**
 *  *_calloc - allocates memory for an array
 *  @nmemb:the num of element
 *  @size:the size
 *  Return:s
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{char *s;
size_t i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
s = malloc(nmemb * size);
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
s[i] = 0;
}
return (s);
}
