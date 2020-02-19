#include "holberton.h"

/**
 * _atoi - check the code for Holberton School students.
 *@s: string character
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i, str, contador, y, n, c;

	contador = 0;
	y = 0;
	str = 0;
	n = 1;
	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\0')
		{
			continue;
		}
		if ((contador > 0) & (s[i + 1] < '0'))
		{
			contador++;
			y = s[i] - '0';
			str = (str * 10) + y;
			break;
		}

		if (s[i] == '-')
		{
			n *= -1;
		}


		if (s[i] >= '0' && s[i] <= '9')
		{
			contador++;
			y = s[i] - '0';
			str = (str * 10) + y;
		}
	}

	c = (contador > 0) ? str * n : 0;

	return (c);

}
