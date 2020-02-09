#include <stdio.h>
#include "holberton.h"

/**
 * print_square - this is the description os
 *@size: character value
 * Return: Always 1 if uppercase 0 otherwise
 */
void print_square(int size)
{
	int num_squares, num_lines;

	num_lines = size;
	num_squares = size;

	if (size <= 0)
	{
		putchar('\n');

	} else
	{
		while (num_lines--)
		{
			while (num_squares--)
			{
				putchar('#');
			}
			num_squares = size;
			putchar('\n');
		}

	}
}
