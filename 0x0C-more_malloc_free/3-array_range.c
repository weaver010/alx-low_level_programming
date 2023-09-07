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
int i;
int *n;
if (min > max)
{
return (NULL);
}
n = malloc(((max - min) + 1) * sizeof(int));
if (n == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
{
n[i] = min++;
}
return (n);
}
