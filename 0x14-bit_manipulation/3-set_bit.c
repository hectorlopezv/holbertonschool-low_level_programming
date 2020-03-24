#include "holberton.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index.
 *@n: numbers to convert
 *@index: index that contains the value
 *Return: 1 if it worked or -1 if an error ocurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n |= (1 << index);
	return (1);
}
