#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


int _strlen(char *s);


/**
 *argstostr - use malloc to concatenate
 *@ac: numbers of arguments
 *@av : array of arguments
 *Return: pointer containing all
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	int  sum_char, counter, numeros, j;
	char *C;

	sum_char = 0;
	counter = 0;
	numeros = 0;

	while (counter < ac)
	{
		sum_char += _strlen(*av) + 1;
		av++;
		counter++;
	}
	av -= counter;
	sum_char = sum_char + 1;

	C = (char *) malloc(sizeof(char) * sum_char);

	if (C == NULL)
	{
		return (NULL);
	}

	counter = 0;

	while (counter < ac)
	{
		for (j = 0; *(*(av + counter) + j) != '\0'; j++)
		{
			C[numeros] = *(*(av + counter) + j);
			numeros++;


		}

		C[numeros] = '\n';
		counter++;
		numeros++;

	}
	C[numeros] = '\0';

	return (C);
}

/**
 *_strlen - legnth of a string
 *@s: string to be evaluated
 *Return: return the legnth without
 */

int _strlen(char *s)
{

	int count;

	count = 0;


	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
