#include <stdio.h>
#include<stdlib.h>
/**
 *  *create_array - creates an array of chars
 *  @size:the size
 *  @c:the char
 *  Return:0
 */
char *create_array(unsigned int size, char c)
{
char *a;
a = malloc(size);
if (size == 0)
{
return (NULL);
}
else
{
for (int i = 0; i < size; i++)
{
a[i] = c;
}
return (a);
}
}
