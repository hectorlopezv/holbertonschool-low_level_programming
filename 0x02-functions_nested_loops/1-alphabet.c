#include <stdio.h>
#include "holberton.h"

/**
 *print_
 *
 *Return: nothing
 */

void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
