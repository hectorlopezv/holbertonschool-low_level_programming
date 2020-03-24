#include "holberton.h"

/**
 *binary_to_uint - bynary to int
 *@b: string
 *Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	n = 0;

	if (!b)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		n = (*b - '0') + (2 * n);
		b++;
	}

	return (n);



}
