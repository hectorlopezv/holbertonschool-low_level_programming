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
	int i, j;
	int **C;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		C[i] = malloc(sizeof(int) * width);
		if (C[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(C[i]);
			}
			free(s);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			C[i][j] = 0;
		}
	}

	return (s);
}

