#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - check the code for Holberton School students.
 *@s: string
 * Return: Always 0.
 */

void rev_string(char *s)
{

	int number_spaces;

	number_spaces = _strlen(s);
	char s2[number_spaces + 1];
	int b, a;

	b = 0;
	a = 0;

	for (; b < number_spaces; b++)
	{
		s2[b] = s[b];
	}
	b -= 1;
	for (; a < number_spaces; a++)
	{
		s[a] = s2[b];
		b--;
	}

}

/**
 * _strlen - check the code for Holberton School students.
 *@s: string
 * Return: Always 0.
 */

int _strlen(char *s)
{

	int count;

	count = 0;
	while (*s != '\0')
	{
		s++;/* moving the pointer one index*/
		count++;
	}
	return (count);
}
