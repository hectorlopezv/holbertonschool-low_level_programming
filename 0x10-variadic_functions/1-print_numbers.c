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

	if (n <= 0)
	{
		return;
	}


	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", va_arg(args, int));

		}
		else
		{
			printf("%s%d", separator, va_arg(args, int));

		}
	}
	printf("\n");

	va_end(args);

}
