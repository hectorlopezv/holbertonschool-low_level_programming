#include <stdio.h>
#include "holberton.h"

/**
 * more_numbers - this is the description os
 *
 * Return: Always 1 if uppercase 0 otherwise
 */

void more_numbers(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (b <= 9)
	{
		while (a <= 14)
		{
			if (a >= 0 && a <= 9)
			{
				_putchar(a + '0');

			} else

			{
				_putchar(a / 10  + '0');
				_putchar(a % 10 + '0');

			}
			a++;
		}
		_putchar('\n');
		b++;
		a = 0;

	}

}
