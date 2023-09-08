#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * free_grid - frees malloc memory
 * @grid:grid to be freed
 * @height:variable of the greed
 * return:0 Always (success)
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	 free(grid);
}

