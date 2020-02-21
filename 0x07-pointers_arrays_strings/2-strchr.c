#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - copy
 * @s: string
 * @c: character
 *Return: return s or NULL
 */

char *_strchr(char *s, char c)
{
	int counter;

	counter = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			++counter;
			break;
		}

		++s;
	}

	if (counter > 0)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}

