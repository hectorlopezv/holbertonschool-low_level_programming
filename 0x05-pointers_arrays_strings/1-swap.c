#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 *@a: interger value
 *@b: integer value
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp_a;

	temp_a = *a;
	*a = *b;
	*b = temp_a;

}
