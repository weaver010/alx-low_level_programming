#include<stdlib.h>
/**
 *  *array_range -  creates an array of integers
 *  @min:the nmin
 *  @max:the max
 *  Return:n
 *
 */
int *array_range(int min, int max)
{
int i, o = 0;
int *n;
n = malloc(((max - min) + 1) * sizeof(int));
if (min > max)
{
return (NULL);
}
if (n == NULL)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
n[o] = i;
o++;
}
return (n);
}
