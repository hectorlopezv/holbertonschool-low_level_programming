#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - write a function that allocates using in malloc
 *@b: numbers of bytes
 *Return: return a pointer allocated string
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);

}
