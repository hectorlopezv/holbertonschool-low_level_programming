#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);

/**
 *argstostr - use malloc to concatenate string of variable legnth
 *@ac: numbers of arguments
 *@av : array of arguments
 *Return: pointer containing all concatenated strings with a new line
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av  == NULL)
	{
		return (NULL);
	}



	int  sum_char, counter, numeros, j;
	char *C;

	sum_char = 0;
	counter = 0;
	numeros = 0;

	while (ac != counter)
	{
		sum_char += _strlen(*av) + 1;
		av++;
		counter++;
	}
	av -= counter;
	counter = 0;

	C = (char *) malloc(sizeof(char) * sum_char);

	if (C == NULL)
	{
		return (NULL);
	}

	while (counter != ac)
	{
		for (j = 0; *(*(av + counter) + j) != '\0'; j++)
		{
			C[numeros] = *(*(av + counter) + j);
			numeros++;
		}

		C[numeros] = 10;
		counter++;
		numeros++;

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
