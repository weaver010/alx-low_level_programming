#include<stdio.h>
#include<stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid:the 2d
 * @height:the hiegt
 * Return:void
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
