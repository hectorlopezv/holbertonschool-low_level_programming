#include "holberton.h"
/**
 *_print_rev_recursion - print revertede string
 *@s: print reverted string
 *Return: return reversed printed string
 *
 *
 */

void _print_rev_recursion(char *s)
{

	if (!*s)
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);

}
