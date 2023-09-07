#include<stdlib.h>
/**
 *  *_realloc -  reallocates a memory
 *  @min:the size
 *  @max:the size
 * @ptr:the copy
 *  Return:s
 * 
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *s, *t;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
t = ptr;
s = malloc(new_size);
if (s == NULL)
{
return (NULL);
}
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
{
s[i] = t[i];
}
}
if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
{
s[i] = t[i];
} 
}
free(ptr);
return (s);
}
