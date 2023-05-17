#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free up a 2 d grid
 * @grid: the address
 * @height: height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
