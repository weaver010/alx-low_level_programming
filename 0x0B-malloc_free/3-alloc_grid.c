#include <stdio.h>
#include<stdlib.h>
/**
 * **alloc_grid- prints a grid of integers
 * @width: width
 * @height: height
 * Return: a
 */
int **alloc_grid(int width, int height)
{int k, i;
int **a;
a = malloc(height * sizeof(*a));
if (width <= 0 || height <= 0 || a == 0)
{
return (NULL);
}
for (i = 0; i < height; i++)
{a[i] = malloc(width * sizeof(**a));
if (a[i] == 0)
{
while (i--)
{
free(a[i]);
}
free(a);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (k = 0; k < width; k++)
{
a[i][k] = 0;
}
}
return (a);
}
