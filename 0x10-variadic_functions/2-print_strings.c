#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints the strings
 *@separator: separetir for strings
 *@n: numbers of argumets
 *Return: print string in the stdout
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *p_temp;

	va_start(args, n);

	if (separator == NULL)
	{
		separator = "";
	}
	if (n <= 0)
	{
		printf("\n");
		return;
	}
	p_temp = va_arg(args, char *);
	if (p_temp == NULL)
	{
		printf("%s", "(nil)");
	}
	else
	{
		printf("%s", p_temp);
	}

	for (i = 0; i < n - 1; i++)
	{
		p_temp = va_arg(args, char *);

		if (p_temp == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s%s", separator, p_temp);
		}
	}
	printf("\n");
	va_end(args);
}
