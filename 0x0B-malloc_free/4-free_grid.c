#include"main.h"
#include<stdlib.h>

/**
 * free_grd ->frees up two dimensional greed
 * @grid: address of two dimensional array
 * @height: height of the address
 * Returns:  no value
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
