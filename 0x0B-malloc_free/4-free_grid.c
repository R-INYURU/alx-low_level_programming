#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees all mem allocated by our func grid
 * @grid: grid func we created
 * @height: size of the func
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
	else
		return;
}
