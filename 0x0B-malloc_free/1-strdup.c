#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - dump
 * @str: string literal
 *Return: return string
 */

char *_strdup(char *str)
{
	int size, i, j;

	for (j = 0; str[j] != '\0'; j++)
	{

	}
	j++;

	size = j;

	char *C = (char *)  malloc(size);

	for (i = 0; i < size; i++)
	{
		C[i] = str[i];
	}

	return (C);
}
