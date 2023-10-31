#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - main function of the programme
 *
 * @grid: the first past parameter
 * @height: the second function paraemeter
 *
 * Return Nothing
 */

void free_grid(int *grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i];
	}
	free(grid);
}
