#include "holberton.h"

/**
 * _atoi - check the code for Holberton School students.
 *@s: string character
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int  n;
	unsigned int str, i, y;

	y = 0;
	str = 0;
	n = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			n *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			y = s[i] - '0';
			str = (str * 10) + y;
			if (s[i + 1] == ' ')
			{ /* break space*/
				break;
			}
		}


	}

	return (str * n);


}
