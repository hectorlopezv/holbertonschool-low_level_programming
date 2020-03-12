#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_numbers - print_numbers
 *@separator: the separator
 *@n: number of const
 *Return: return the string separated
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);




	if (separator == NULL)
	{
		separator = "";
	}
	if (n <= 0)
	{
		return;
	}

	printf("%d", va_arg(args, int));

	for (i = 0; i < n - 1; i++)
	{
		printf("%s%d", separator, va_arg(args, int));

	}
	printf("\n");

	va_end(args);

}
