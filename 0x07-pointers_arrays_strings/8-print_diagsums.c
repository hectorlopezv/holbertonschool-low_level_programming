#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - add diagonal and anti diagonal
 *@a: matrix
 *@size: size of the m x m matrix
 *Return: return sum of diagonal and anti diagonal
 */

void print_diagsums(int *a, int size)
{
	const int matrix_size =  size;
	int (*p)[matrix_size];
	int (*aa)[matrix_size];
	int (*p1);
	int i, j, sum_diagonal, sum_opposite_diagonal;

	sum_diagonal = 0;
	sum_opposite_diagonal = 0;
	aa = (int (*)[matrix_size]) a;

	p = (int (*)[matrix_size]) a;

	for (i = 0; p != aa + matrix_size; p++, i++)
	{
		for (p1 = *p, j = 0 ; p1 != *p + matrix_size; p1++, j++)
		{

			if (i == j)
			{

				sum_diagonal += *p1;
			}

			if (i + j == matrix_size - 1)
			{
				sum_opposite_diagonal += *p1;
			}
		}

	}
	printf("%d, %d\n", sum_diagonal, sum_opposite_diagonal);


}
