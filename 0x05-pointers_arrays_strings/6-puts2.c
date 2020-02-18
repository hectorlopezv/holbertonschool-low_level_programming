#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 *@str: string character
 * Return: Always 0.
 */

void puts2(char *str)
{
	int contador;

	contador = 1;

	for (; ;)
	{
		if (contador % 2 == 0)
		{	contador++;
			str++;
			continue;

		} else
		{
			_putchar(*str);
			contador++;
			str++;
		}

		if (*str == '\0')
		{
			break;
		}

	}

	_putchar('\n');
}
