#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		for (l = 0; l < width; l++)
			grid[i][l] = 0;
	}
	return (grid);
}
