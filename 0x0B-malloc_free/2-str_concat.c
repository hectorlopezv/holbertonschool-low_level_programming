#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);

/**
 *str_concat - concatenate 2 strings
 *@s1: string 1
 *@s2: string 2
 *Return: reurn concatenated strings
 */

char *str_concat(char *s1, char *s2)
{

	int size_s1, size_s2;
	int k, counter;
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

	C = (char *) malloc(size_s1 + size_s2 + 1);

	if (C == NULL)
	{
		return (NULL);
	}

	for (k = 0, counter = 0; k < size_s1; k++, counter++)
	{
		C[k] = s1[counter];
	}

	for (counter = 0; counter < size_s2; counter++, k++)
	{
		C[k] = s2[counter];
	}
	C[k] = s2[counter];

	return (C);
}


/**
 *_strlen - legnth of a string
 *@s: string to be evaluated
 *Return: return the legnth without taking into account the nul
 */

int _strlen(char *s)
{

	int count;

	count = 0;
	while (*s != '\0')
	{
		s++;/* moving the pointer one index*/
		count++;
	}
	return (count);
}

