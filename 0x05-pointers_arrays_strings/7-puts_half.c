#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 *@s: string variable
 * Return: Always 0.
 */

void puts_half(char *s)
{
	int lenght, c;

	lenght = _strlen(s);
	c = (lenght % 2 == 0) ? lenght / 2 : (lenght - 1) / 2;

	if (s[0] == '\0')
	{
		return;

	}
	for (; s[c] != '\0'; c++)
	{
		_putchar(s[c]);
	}

	/*
	 * for(;largo<=lenght;largo++)
	 * {
	 * _putchar(str[largo]);
	 *
	 * }
	 */

	/*
	 * while (s[i] != '\0')
	 * {
	 * counter++;
	 * i++;
	 *  }
	 */
	_putchar('\n');
}

/**
 * _strlen - check the code for Holberton School students.
 *@s: string variable
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int count, i;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		i++;/* moving the pointer one index*/
		count++;
	}

	return (count);
}
