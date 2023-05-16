#include "main.h"

/**
 * free_grid - frees a 2D grid
 * @grid: memory block to be freed
 * @height: height of array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}
	free(grid);
}
