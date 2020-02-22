#include "holberton.h"
/**
 *  * PrimeChecker - Checks if the given number is prime or not.
 *   * @v: Iterator.
 *    * @i: Number given.
 *     *
 *      * Return: if the number is prime returns 1, otherwise 0.
 *       */
int PrimeChecker(int v, int i)
{
	if (i % v == 0)
	{
		if (v == i)
			return (1);
		else
			return (0);
	}
	return (PrimeChecker(v + 1, i));
}
/**
 *  * is_prime_number - Checks if the given number is prime or not.
 *   * @n: Given number.
 *    *
 *     * Return: if the number is prime returns 1, otherwise 0.
 *      */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (n > 2 ? PrimeChecker(2, n) : 1);
}
