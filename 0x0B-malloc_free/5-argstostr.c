#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int type Integer
 * @av: Double Pointer
 * Return: Pointer p
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int str = 0;
	int a = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j]; j++)
		{
			str++;
		}
	}

	p = malloc(sizeof(char) * (str + ac + 1));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[a] = av[i][j]; /*p = av[][]*/
			a++; /*the variable starts at 0 and increases 1*/
	}
		p[a] = '\n';
		a++;
	}

	return (p);
}
