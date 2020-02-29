#include <stdio.h>
#include "holberton.h"

/**
 * _isupper - this is the description os
 *@c: character value
 * Return: Always 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);


	} else
	{
		return (0);
	}

}

