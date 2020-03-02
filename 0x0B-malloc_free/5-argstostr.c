#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


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
	int  size, counter, numeros, j, count, count1;
	char *C;

	size = 0;
	counter = 0;
	numeros = 0;
	count1 = 0;
	count = 0;

	for (count = 0; count < ac; count++)
	{
		for (count1 = 0; av[count][count1] != '\0'; count1++)
		{
			size += 1;
		}
		size += 1;
	}

	size += 1;
	C = (char *) malloc(sizeof(char) * size);

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

