#include "holberton.h"

/**
 *factorial - factorial of n
 *@n: n is the number
 *Return: return factorial of n number
 */

int factorial(int n)
{



	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{

		return (1);
	}

	return (n * factorial(n - 1));
}

