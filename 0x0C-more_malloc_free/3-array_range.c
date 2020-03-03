#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - create an array
 *@min: min number
 *@max: max number
 *Return: return a array
 */

int *array_range(int min, int max)
{
	int elements;
	int *array_int;
	int i;

	elements = max - min;
	elements++;

	if (min > max)
	{
		return (NULL);
	}

	array_int = malloc(sizeof(*array_int) * elements);
	if (array_int == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < elements; i++)
	{
		array_int[i] = i;

	}

	return (array_int);



}
