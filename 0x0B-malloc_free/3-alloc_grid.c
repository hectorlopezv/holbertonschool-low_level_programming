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
	//int  rows, colum;
	//int **Matrix;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	int **A = (int **)malloc(height * sizeof(int *));		// or int* A[M];

	if (A == NULL)
	{
		return (NULL);
	}

	// dynamically allocate memory of size M*N and let *A point to it
	*A = (int *)malloc(sizeof(int) * height * width);
	if (*A == NULL)
	{
		return (NULL);
	}
	// position allocated memory across M pointers
	for (int r = 0; r < width; r++)
		A[r] = (*A + width*r);

	// assign values to allocated memory
	for (int r = 0; r < height; r++)
		for (int c = 0; c < width; c++)
			A[r][c] = 0;	// or *(A[r] + c) or *(*(A + r) + c)

	return (A);
}

