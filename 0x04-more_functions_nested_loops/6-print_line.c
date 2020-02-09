#include <stdio.h>
#include "holberton.h"

/**
 * print_line - this is the description os
 *@n: integer n
 * Return: Always 1 if uppercase 0 otherwise
 */

void print_line(int n)
{
	int a;

	a = 0;
	if (n <= 0)
	{
		_putchar('\n');

	} else
	{
		for (a = n ; a > 0 ; a--)
		{

			_putchar('_');

		}
		_putchar('\n');

	}
}
