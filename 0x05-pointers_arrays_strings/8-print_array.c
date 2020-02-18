#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 *@a: integer array
 *@n:  size integer value
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)

	{
		if (i == n - 1)
		{
			printf("%d", a[i]);

		} else
		{
			printf("%d, ", a[i]);
		}

	}
	printf("\n");

}
