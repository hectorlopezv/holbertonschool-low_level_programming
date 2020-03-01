#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 *str_concat - concatenate 2 strings
 *@s1: string 1
 *@s2: string 2
 *Return: reurn concatenated strings
 */

char *str_concat(char *s1, char *s2)
{

	int i, j;
	int k, counter;
	char *C;

	if (s1 != NULL && s2 != NULL)
	{
		i = _strlen(s1);
		j = _strlen(s2) + 1;
		C = (char *) malloc(i + j);

		if (C == NULL)
		{
			return (NULL);
		}

		for (k = 0, counter = 0; k < i; k++, counter++)
		{
			C[k] = s1[counter];
		}
		C[k] = s1[counter];
		for (counter = 0; counter < j; counter++, k++)
		{
			C[k] = s2[counter];
		}
		C[k] = s2[counter];

	}

	if (s1 != NULL && s2 == NULL)
	{
		i = _strlen(s1) + 1;
		j = 0;
		C = (char *) malloc(i + j);

		if (C == NULL)
		{
			return (NULL);
		}
		for (k = 0, counter = 0; k < i; k++, counter++)
		{
			C[k] = s1[counter];
		}
		C[k] = s1[counter];
	}


	if (s1 == NULL && s2 != NULL)
	{
		i = 0;
		j = _strlen(s2) + 1;
		C = (char *) malloc(i + j);

		if (C == NULL)
		{
			return (NULL);
		}
		for (counter = 0, k = 0; counter < j; counter++, k++)
		{
			C[k] = s2[counter];
		}
		C[k] = s2[counter];

	}


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

