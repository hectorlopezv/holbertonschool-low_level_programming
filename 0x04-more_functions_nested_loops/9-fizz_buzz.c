#include <stdio.h>
#include "holberton.h"

/**
 * print_fizz - this is the description os
 *
 * Return: Always 1 if uppercase 0 otherwise
 */
void print_fizz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz\t");

		} else if (i % 5 == 0)
		{
			printf("Buzz\t ");


		} else if (i % 3 == 0)
		{
			printf("Fizz\t ");


		} else

		{
			printf("%d ", i);


		}
		if (i == 100)
		{
			printf("\n");

		}
	}

}
