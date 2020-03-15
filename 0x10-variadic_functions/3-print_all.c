#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _str_len(const char * const format);

/**
 *print_all - print_all the characters
 *@format: print the format of the char
 *Return: return the printed value
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char buffer[2];
	void (*f)(char *separator, va_list temp, int size, int contador_space);

	va_start(args, format);

	i = 0;

	if (format == NULL)
	{
		printf("(nil)\n");
		return;
	}

	while (i < _str_len(format))
	{
		buffer[0] = format[i];
		buffer[1] = '\0';

		f = get_op(buffer);
		if (f != NULL)
		{
			f(", ", args, _str_len(format), i); /* imprimira algo */
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
