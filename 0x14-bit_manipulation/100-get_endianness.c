#include "holberton.h"

/**
 * get_endianness - get_endianness
 *Return: return endiannes
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char*)&i;
	if (*c)
		printf("Little endian");
	else
		printf("Big endian");
	getchar();
	return 0;
}