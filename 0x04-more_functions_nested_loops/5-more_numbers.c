#include <stdio.h>
#include "holberton.h"

/**
 * more_numbers - this is the ription os
 *
 * Return: Always 1 if uppercase 0 otherwise
 */

void more_numbers(void)
{
	int i;
	int b;

	char *p = "01234567891011121314";

	for (b = 0; b < 10; b++)
	{
		for (i = 0; i < 20; i++)
		{
			_putchar(*(p + i));

		}
		_putchar('\n');

	}
}
