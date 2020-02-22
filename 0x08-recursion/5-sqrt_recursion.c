#include "holberton.h"

int funcion(int i, int n);

/**
 *_sqrt_recursion - recursion sqrt
 *@n: numbert
 *Return: return sqrt of natural number
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;

	if (n < 0)
	{
		return (-1);
	}

	return (funcion(i, n));
}

/**
 *funcion - function to recursion
 *@i:iterator
 *@n: number of sqrt
 *Return: return recursive character
 */

int funcion(int i, int n)
{

	if (n == 0 || n == 1)
	{
		return (n);
	}

	if (i * i < n)
	{
		return (funcion(i + 1, n));
	}

	if (i * i == n)
	{
		return (i);
	}

	return (-1);
}

