#include <stdio.h>
#include "holberton.h"

/**
 * print_numbers - this is the description os
 *
 * Return: Always 1 if uppercase 0 otherwise
 */

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);

	}
	_putchar('\n');
}
