#include "holberton.h"

/**
 *string_toupper - lower  to upper case
 *@s: string character
 *Return: return a string
 *
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] >= 'a' && s[i] <= 'z')
		{

			s[i] = s[i] - ' ';
		}

	}

	return (s);
}
