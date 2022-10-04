#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **grid;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(height * sizeof(int *));
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL) /* validate memory */
{
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++) /* set array values to 0 */
grid[i][j] = 0;
}
return (grid);
}
