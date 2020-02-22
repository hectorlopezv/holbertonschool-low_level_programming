#include "holberton.h"

/**
 *_puts_recursion - print a string.
 *@s: string
 *Return: return printed string
 */

void _puts_recursion(char *s)
{

	if (!*s)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);

}

