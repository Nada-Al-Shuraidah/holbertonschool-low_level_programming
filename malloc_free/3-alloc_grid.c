#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Returns a pointer to a 2 dimensional array of integers.
* @width: The width of the grid.
* @height: The height of the grid.
*
* Return: A pointer to the 2-dimensional array, or NULL on failure.
*         If width or height is 0 or negative, returns NULL.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

/* Return NULL if width or height is 0 or negative */
if (width <= 0 || height <= 0)
return (NULL);

/* Allocate memory for the rows */
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

/* Allocate memory for the columns and initialize to 0 */
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
/* Free previously allocated memory if allocation fails */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}

for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
