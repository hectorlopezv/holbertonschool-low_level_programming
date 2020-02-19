#include "holberton.h"

/**
 * _atoi - check the code for Holberton School students.
 *@s: string character
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int n, contador;
	unsigned int str, y, i;

	str = 0;
	y=0;
	i = 0;
	n =1;
	contador= 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if ((contador > 0) &( s[i + 1] == ' ') )
		{ /* break space*/
			contador++;
			y = s[i] - '0';
			str = (str * 10) + y;

			break;
		}


		if (s[i] == '-')
		{
			n = n * -1;
		}


		if (s[i] >= '0' && s[i] <= '9')
		{
			contador++;
			y = s[i] - '0';

			str = (str*10) + y;
		}
	}
	return (str * n);
}
