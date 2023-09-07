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
n = malloc(((max - min) + 2) * sizeof(int));
if (min > max)
{
return (NULL);
}
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
