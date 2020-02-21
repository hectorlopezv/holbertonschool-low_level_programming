#include "holberton.h"

/**
 * print_chessboard - check the code for Holberton School students.
 *@a: array pointer  char *p[8}
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	/*Define a pointer to walk the rows of the 2D array.*/
	char (*p1)[8] = a;
	char *p2;

	for (; p1 != a + 8 ; p1++)
	{
		for (p2 = *p1 ; p2 != *p1 + 8; p2++)
		{
			if (*p2 >= 32 && *p2 < 127)
			{
				_putchar(*p2);

			}

		}
		_putchar('\n');

	}
}
