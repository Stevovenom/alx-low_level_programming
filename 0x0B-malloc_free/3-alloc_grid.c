#include "main.h"
/**
 * alloc_grid - takes two integer arguments and returns pointer to 2D array
 * @width: the width of the grid
 * @height: the heigght of the grid
 * Return: the pointer to the D array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int*));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == 0)
		{
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
