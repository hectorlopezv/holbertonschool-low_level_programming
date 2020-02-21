#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - copy
 * @s: string
 * @c: character
 *Return: return s or NULL
 */

char *_strchr(char *s, char c)
{
	if (!s)
	{
		return (NULL);
	}

	int counter;

	counter = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			++counter;
			return (s);
		}

		++s;
	}
	/*printf("%c",*s);*/
	return (s);

}

