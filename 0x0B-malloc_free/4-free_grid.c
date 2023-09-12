#include "main.h"
/**
 * free_grid - frees the memory allocated to the 2D array
 * @grid: The matrix being passed
 * @height: height of the grid being freed
 * Return: Null
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
