#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees a 2 dimensional grid previously created by alloc_grid.
* @grid: The 2 dimensional array of integers to be freed.
* @height: The height of the grid.
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);  /* Free each row */
}
free(grid);  /* Free the array of pointers */
}
