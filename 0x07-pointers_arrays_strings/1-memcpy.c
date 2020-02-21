#include "holberton.h"

/**
 *_memcpy - copy n bytes from source to dest
 *@dest: destination string buffer
 *@src: source string buffer
 *@n: number of bytes
 *Return: return pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
