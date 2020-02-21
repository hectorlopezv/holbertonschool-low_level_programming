#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - give the legth of character that matched accept from the start
 *@s: string to be verified
 *@accept: characters to match
 *Return: return the legth
 */

unsigned int _strspn(char *s, char *accept)
{

	int contador = 0;
	int contador_2 = 0;
	int i;
	int j =0;

	for (i = 0; s[i] != '\0'; i++)
	{
		//contador_2 = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				contador++;
				break;
			}
			else if (s[i] != accept[j])
			{
				contador_2++;
			}

		}
		if(accept[j] == '\0')
		{
			break;
		}

		//printf ("%c %c  %d %d %d\n", s[i] ,accept[j], contador_2,contador,j);

	}
	return contador;
}

