/**
 * Prototype: int **alloc_grid(int width, int height);
 *Each element of the grid should be initialized to 0
 *The function should return NULL on failure
 *If width or height is 0 or negative, return NULL
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
int i, j;
int **grid;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(height * sizeof(int *));
for ( i = 0; i < height; i++)
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