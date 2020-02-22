#include "holberton.h"

/**
 *_strlen_recursion - count legthn
 *@s: counter legthn
 *Return: count return of a function
 */

int _strlen_recursion(char *s)
{

	if (!*s)
	{

		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}
