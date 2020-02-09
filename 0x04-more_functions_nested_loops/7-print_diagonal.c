#include <stdio.h>
#include "holberton.h"

/**
 * print_diagonal - this is the description os
 *@n: character value
 * Return: Always 1 if uppercase 0 otherwise
 */

void print_diagonal(int n)
{
	int a;

	a = 0;

	if (n > 0)
	{
		while (a < n)
		{  int b;
			b = a;
			while (b > 0)
			{
				putchar(' ');
				b--;
			}
			putchar('\\');
			putchar('\n');
			a++;
		}
	}
}
