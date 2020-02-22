#include "holberton.h"

/**
 *wildcmp - compare char with wilcard
 *@s1: string 1
 *@s2: string 2
 *Return: return condition
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1); /* complete*/
	}

	if (*s1 == *s2)
	{/* easy case*/
		return (wildcmp(s1 + 1, s2 + 1));

	}


	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{/* easy case*/0
			return (wildcmp(s1, s2 + 1));
		}
		/* if statement ......*/
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
		{
			return (1);
		}
	}

	return (0); /* s1 != *s2*/

}

