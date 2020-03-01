#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - create malloc array and fill it with C char
 *@size: size of malloc
 *@c: char with is goign to fill the 1d array
 *Return: NULL or a pointer to the 1d array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (0);
	}

	char *C = (char *) malloc(size);

	if (C == 0)
	{
		return (C);
	}
	for (int i = 0; i < size; i++)
	{
		C[i] = c;
	}

	return (C);

}
