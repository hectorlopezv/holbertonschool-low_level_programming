#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - calloc function
 * @nmemb: number of elements
 *@size: size of the type char
 *Return: return the pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array_1d;
	unsigned int i;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array_1d = malloc(size * nmemb);
	if (array_1d == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		array_1d[i] = 0;

	}

	return (array_1d);


}
