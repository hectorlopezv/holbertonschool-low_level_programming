#include <stdio.h>
#include "holberton.h"

/**
 * print_most_numbers - this is the description os
 *
 * Return: Always 1 if uppercase 0 otherwise
 */

void print_most_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		if ((a > 2 && a < 4) || (a > 4 && a <= 9) || (a >= 0 && a < 2))
		{
			_putchar(a + '0');

		}
		a++;
	}
	_putchar('\n');
}
