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

	int j, rows, colum;
	int **Matrix;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* height 1d array*/

	Matrix = (int **) malloc(sizeof(int *) * height);

	if (Matrix == NULL)
	{
		free(Matrix);
		return (NULL);
	}

	/* fill array with something*/

	for (j = 0; j < height; j++)
	{
		Matrix[j] = (int *) malloc(sizeof(int) * width);
		if (Matrix[j] == NULL)
		{
			free(Matrix[j]);
			return (NULL);
		}
	}

	for (rows = 0; rows < height; rows++)
	{
		for (colum = 0; colum < width; colum++)
		{
			Matrix[rows][colum] = 0;

		}

	}

	return (Matrix);
}

