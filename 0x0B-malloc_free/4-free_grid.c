#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - free 2d grid
 *@grid: grid
 *@height:height
 *Return: return freed grid
 */

void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
