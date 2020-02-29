#include <stdio.h>
#include "holberton.h"

/**
 * _isdigit - this is the description os
 *@c: character value
 * Return: Always 1 if uppercase 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);


	} else
	{
		return (0);
	}

}
