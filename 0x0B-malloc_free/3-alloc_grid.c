#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid - a n x m matrix
 *@width: Columns....
 *@height: Rows.....
 *Return: matrix.
 */

int **alloc_grid(int width, int height)
{
	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	if (width < 0 || height < 0)
	{
		return (NULL);
	}

	int j, rows, colum;

	int **Matrix;

	/* height 1d array*/
	Matrix = (int **) malloc(sizeof(int *) * height);

	if (Matrix == NULL)
	{
		return (NULL);
	}
	/* fill array with something*/
	for (j = 0; j < height; j++)
	{
		Matrix[j] = (int *) malloc(sizeof(int) * width);
	}
	for (rows = 0; rows < height; rows++)
	{
		for (colum = 0; colum < height; colum++)
		{
			Matrix[rows][colum] = 0;

		}

	}


	return (Matrix);


}

