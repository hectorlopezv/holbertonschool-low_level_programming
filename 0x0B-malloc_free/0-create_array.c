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
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	char *C = (char *) malloc(size);

	if (C == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{


		C[i] = c;
	}

	C[i] = '\0';


	return (C);

}

