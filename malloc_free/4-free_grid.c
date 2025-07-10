#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free allocated grid
 * @grid: pointer to a 2 dimensional grid
 * @height: height of array
 * Return: Success
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
