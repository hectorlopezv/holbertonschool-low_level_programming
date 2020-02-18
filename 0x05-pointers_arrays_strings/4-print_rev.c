#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 *@s: pointer value for a string
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		s++;/* moving the pointer one index*/

		count++;
	}

	s--;/* decrese the null character*/

	for (; count > 0; s--)
	{
		_putchar(*s);
		count--;
	}
	_putchar('\n');

}
