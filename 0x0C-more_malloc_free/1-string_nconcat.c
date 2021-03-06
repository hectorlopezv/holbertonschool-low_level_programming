#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strlen - legnth of a string
 * @s: a string to be evaluated
 * Return: return the legnth of a string
 */

int _strlen(char *s)
{

	int count;

	count = 0;
	for (; s[count] != '\0'; count++)
	{

	}

	return (count);
}


/**
 * string_nconcat - concatenate a string with n bytes
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes to be copied
 *Return: return a pointer to the copied string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int size_s1, size_s2;
	unsigned int k, counter1;
	char *C;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);
	if (n >= size_s2)
	{
		n = size_s2;
		C = (char *) malloc(size_s1 + size_s2 + 1);
	}
	else
	{
		C = (char *) malloc(size_s1 + n + 1);
	}

	if (C == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < size_s1; k++)
	{
		C[k] = s1[k];
	}
	for (counter1 = 0; counter1 < n; counter1++)
	{
		C[k++] = s2[counter1];
	}
	C[k++] = '\0';
	return (C);
}

