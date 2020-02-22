#include "holberton.h"

int prime_watcher(int n, int i);

/**
 *is_prime_number - say if is prime or not
 *@number: number to be checked
 *Return: return 1 if primer 0 otherwise
 */

int is_prime_number(int number)
{

	int iterator;

	iterator = 2;

	/* 0,1 not considered prime numbers*/
	if (number < 2)
	{
		return (0);
	}

	if (number == 2)
	{
		return (1);
	}

	return (prime_watcher(number, iterator));

}

/**
 *prime_watcher - recursion loop
 *@number: number to be considered
 *@iterator: number to iterate
 *Return: return 1or 0
 */

int prime_watcher(int number, int iterator)
{

	if (iterator == number - 1)
	{
		return (1);
	}

	if (number % iterator  == 0)
	{
		return (0);
	}

	if (number % iterator  != 0)
	{
		return (prime_watcher(number, iterator + 1));
	}

	return (0);

}
