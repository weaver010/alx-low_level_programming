#include<stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b:size
 * Return:pointer
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
void *s = malloc(b);
if (s == NULL)
{
exit(98);
}
else
{
return (malloc(b));
}
}
