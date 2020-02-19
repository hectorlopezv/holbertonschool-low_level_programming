
#include "holberton.h"

/**
 * leet - check the code for Holberton School students.
 *@s: string
 * Return: Always 0.
 */

char *leet(char *s)
{
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char remplazo[] = "43071";
	int contador, a;

	contador = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		contador = 0;

		for (; lower[contador] != '\0'; contador++)
		{
			if (s[a] == lower[contador] || s[a] == upper[contador])
			{
				s[a] = remplazo[contador];
			}

		}

	}
	return (s);
}
