#include "holberton.h"
#include <stdio.h>

/**
 *_strpbrk - set bytes of first ocurrence
 *@s: string
 *@accept: template string
 *Return: s pointer or null
 *
 */



char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}

		}
		++s;
	}


	return ('\0');


}
