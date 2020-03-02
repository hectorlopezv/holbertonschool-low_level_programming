#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 *  *argstostr - use malloc to concatenate string of variable legnth
 *   *@ac: numbers of arguments
 *    *@av : array of arguments
 *     *Return: pointer containing all concatenated strings with a new line
 *      */

char *argstostr(int ac, char **av)
{
	if (ac - 1  <= 0 || *(av + 1) == NULL)
	{
		return (NULL);
	}

	av++;
	int  sum_char, counter, numeros;
	char *C;

	sum_char = 0;
	counter = 0;
	numeros = 0;

	while (*av != NULL)
	{
		sum_char += _strlen(*av) + 1;
		av++;
		counter++;
	}

	C = (char *) malloc(sizeof(char) * sum_char);
	if (C == NULL)
	{
		return (NULL);
	}

	av -= counter;

	counter = 0;

	while (counter != ac - 1)
	{
		for (int j = 0; *(*(av + counter) + j) != '\0'; j++)
		{
			C[numeros] = *(*(av + counter) + j);
			numeros++;
			if (numeros == sum_char - 1)
			{
				C[numeros] = 0;

			}

		}
		C[numeros] = 10;
		counter++;
		numeros++;

	}

	return (C);
}


/**
 *  *_strlen - legnth of a string
 *   *@s: string to be evaluated
 *    *Return: return the legnth without taking into account the nul
 *     */

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
