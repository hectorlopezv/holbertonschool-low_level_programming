#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 *@str: string character
 * Return: Always 0.
 */

void rev_string(char *str)
{
	int b, c;
	int length = _strlen(str);

	char temp;

	b = 0;
	c = length;

	/*swappp*/
	while (c >= b)
	{
		temp = str[b];
		str[b] = str[c];
		str[c] = temp;
		c--;
		b++;
	}
}

/**
 * _strlen - check the code for Holberton School students.
 *@s: string variable
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int counter = 0;

	int i;

	i = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	counter--;
	return (counter);
}
