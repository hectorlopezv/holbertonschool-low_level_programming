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
		write(1, "1\n", 3);
		return;
	}
	else if (n == 0)
	{
		write(1, "0\n", 3);
		return;
	}

	print_binary(n >> 1);

	_putchar('0' + (n & 1));




}

