#include "holberton.h"

/**
 *flip_bits - returns the number of bits you would need to flip to get
 *from one number to another.
 *@n: lont type int numbers to compare
 *@m: lont type int numbers to compare
 *Return: returns the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	n = n ^ m;
	while (n)
	{
		if (n & 1)
			count++;
		n >>= 1;
	}
	return (count);
}
