#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a pointer to a 2 dimensional array of ints
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2 dimensional array or NULL if error
 */
int **alloc_grid(int width, int height)
{
	int x = 0;
	int y = 0;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (y < height)
	{
		grid[y] = malloc(width * sizeof(int));
		if (grid[y] == NULL)
		{
			free_grid(grid, y);
			return (NULL);
		}
		x = 0;
		while (x < width)
		{
			grid[y][x] = 0;
			x = x + 1;
		}
		y = y + 1;
	}
return (grid);
}
