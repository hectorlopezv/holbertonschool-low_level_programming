#include "holberton.h"
#include "unistd.h"

/**
 *print_binary - bynary to int
 *@n: string
 *Return: unsigned int
 */

void print_binary(unsigned long int n)
{
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	else if (n == 0)
	{
		_putchar('1');
		return;
	}

	print_binary(n >> 1);

	_putchar('0' + (n & 1));




}

