#include <stdio.h>
#include "holberton.h"

/**
 * print_triangle - this is the description os
 *@size: character value
 * Return: Always 1 if uppercase 0 otherwise
 */

void print_triangle(int size)
{
	int a, b;

	b = size;
	a = 0;

	if (size > 0)
	{
		while (a < size)
		{
			do
			{
				putchar(' ');
				b--;
			} while ( b < size);
			putchar('#');
			putchar('\n');
			a++;
		}
	} else

	{
		_putchar('\n');

	}
}
