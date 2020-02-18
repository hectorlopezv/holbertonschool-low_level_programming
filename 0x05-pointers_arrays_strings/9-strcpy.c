#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - check the code for Holberton School students.
 *@dest: destination
 *@src: source
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)


{
	int contador;

	contador = 0;

	while (*src != '\0')
	{
		dest[contador] = *src;
		src++;
		contador++;
	}
	dest[contador] = '\0';
	return (dest);
}
