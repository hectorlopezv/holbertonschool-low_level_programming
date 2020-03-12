#include "variadic_functions.h"

/**
 *sum_them_all - summ all numbers in a variatic function
 *@n: numbers of arguments
 *Return: return the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;

	va_list args;

	va_start(args, n);

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);

	}

	va_end(args);

	return (sum);


}
