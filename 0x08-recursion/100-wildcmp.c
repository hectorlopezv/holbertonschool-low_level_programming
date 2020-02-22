#include "holberton.h"

/**
 *wildcmp - compare char with wilcard
 *@s1: string 1
 *@s2: string 2
 *Return: return condition
 */

int wildcmp(char *s1, char *s2)
{
	/* s1 original -  s2 compare string*/

	if (*s1 == '\0' && *s2 == '\0')
	{
		/* end the is goging to mean they are equal*/
		return (1);
	}

	if (*s1 == *s2)
	{/* case of equalitiy to the rigth*/
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}

		/* aceptar y no aceptar cases*/
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	return (0);
}
