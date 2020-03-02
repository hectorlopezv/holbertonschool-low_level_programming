#include "holberton.h"
#include <stdlib.h>

void free_2d(int **grid, int height);

/**
 *alloc_grid - a n x m matrix
 *@width: Columns....
 *@height: Rows.....
 *Return: matrix.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **Matrix;

	if (width < 0 || height < 0)
	{
		return (NULL);
	}
	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	/* pointer to a 1d array*/
	Matrix = (int **) malloc(sizeof(int *) * height);
	if (Matrix == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		Matrix[i] = (int *) malloc(sizeof(int) * width);
		if (Matrix[i] == NULL)
		{/* case where a colum is null erase all*/
			/* malloc is call #colum times*/
			free_2d(Matrix, height);
		}
	}

	return (Matrix);
}

/**
 * free_2d - free a 2d array
 *@grid: 2d pointer simulating a matrix
 *@height: height of the matrix(rows)
 *Return: return the free matrix
 */

void free_2d(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
