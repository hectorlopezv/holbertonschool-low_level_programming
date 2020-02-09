#include <stdio.h>
#include "holberton.h"

/**
 * print_triangle - this is the description os
 *@size: character value
 * Return: Always 1 if uppercase 0 otherwise
 */

void print_triangle(int size)
{
	int a, b, temp, c, d;

	b = size - 1;
	d = 0;

	if (size > 0)
	{
		temp = b;
		for (a = 0 ; a < size; a++)

		{
			for (b = temp ; b > 0; b--)
			{
				/*print spaces*/
				_putchar(' ');
			}
			for (c = 0 ; c <= d; c++)
			{
				_putchar('#');

			}
			d++;
			c = 0;
			_putchar('\n');
			temp--;
			b = temp;

		}
		;
	} else
	{
		_putchar('\n');
	}

}
