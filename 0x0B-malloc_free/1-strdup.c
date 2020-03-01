#include "holberton.h"
#include <stdlib.h>


/**
 *_strdup - dump
 * @str: string literal
 *Return: return string
 */

char *_strdup(char *str)
{
	int i, j;
	char *C;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{

	}
	j++;

	C = (char *) malloc(j);

	for (i = 0; i < j; i++)
	{
		C[i] = str[i];
	}

	return (C);
}
