#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Free the memmory previously allocated by alloc_grind
 * @grid: pointer to the memmory
 * @height: height of memory
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	free(grid[i]);
	free(grid);
}
