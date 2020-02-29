#include "holberton.h"

/**
 *_memset - fill memory with constant byte
 *@s: string buffer
 *@b: constant byte
 *@n: number of spaces in memory
 *Return: return pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
