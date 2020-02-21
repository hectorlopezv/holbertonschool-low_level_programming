#include "holberton.h"
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
			return (s);
		}

		++s;
	}
	/*printf("%c",*s);*/
	return (0);

}

