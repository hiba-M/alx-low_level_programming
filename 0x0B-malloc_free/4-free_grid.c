#include "main.h"
/**
 * free_grid - free an array of 2D.
 * @grid: array row.
 * @height: array colons.
 *
 * Return: Nothing.
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
