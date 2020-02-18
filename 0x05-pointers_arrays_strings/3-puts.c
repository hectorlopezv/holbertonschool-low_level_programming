#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 *@str: string pointer
 * Return: Always None
 */

void _puts(char *str)
{
	while (*str != '\0')
	{   _putchar(*str);
		str++;/* moving the pointer one index*/

	}
	_putchar('\n');

}
