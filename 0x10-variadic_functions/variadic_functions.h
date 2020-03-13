#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void (*get_op(char *format))(char *, va_list, int, int);

struct cases
{
	char *format;
	void (*f)(char *separator, va_list temp, int size, int contador_space);
};
typedef struct cases switc_h;


void print_c(char *separator, va_list temp, int size, int contador_space);
int _str_len(const char *const format);

void print_i(char *separator, va_list temp, int size, int contador_space);

void print_f(char *separator, va_list temp, int size, int contador_space);

void print_s(char *separator, va_list temp, int size, int contador_space);
/**
 *_str_len - length of a string
 *@format: format of a string
 *Return: the length of a string
 */

int _str_len(const char *const format)
{
	int i;
	for (i = 0; format[i] != '\0'; i++)
	{


	}
	return (i);
}

/**
 *print_c - print_c a character
 *@separator: separatarot for characters
 *@temp: va_list
 *@size:number of formats
 *@contador_space: number of the iteration
 *Return: return the string
 */

void print_c(char *separator, va_list temp, int size, int contador_space)
{

	if (contador_space == size - 1)
	{
		printf("%c", va_arg(temp, int));

	}
	else
	{
		printf("%c%s", va_arg(temp, int), separator);

	}




}


/**
 *print_i - print_c a character
 *@separator: separatarot for characters
 *@temp: va_list
 *@size:number of formats
 *@contador_space: number of the iteration
 *Return: return the string
 */

void print_i(char *separator, va_list temp, int size, int contador_space)
{
	if (contador_space == size - 1)
	{
		printf("%d", va_arg(temp, int));

	}
	else
	{
		printf("%d%s", va_arg(temp, int), separator);

	}

}

/**
 *print_f - print_c a character
 *@separator: separatarot for characters
 *@temp: va_list
 *@size:number of formats
 *@contador_space: number of the iteration
 *Return: return the string
 */

void print_f(char *separator, va_list temp, int size, int contador_space)
{
	if (contador_space == size - 1)
	{
		printf("%f", va_arg(temp, double));

	}
	else
	{
		printf("%f%s", va_arg(temp, double), separator);

	}

}


/**
 *print_s - print_c a character
 *@separator: separatarot for characters
 *@temp: va_list
 *@size:number of formats
 *@contador_space: number of the iteration
 *Return: return the string
 */
void print_s(char *separator, va_list temp, int size, int contador_space)
{
	if (contador_space == size - 1)
	{
		printf("%s", va_arg(temp, char *));

	}
	else
	{
		printf("%s%s", va_arg(temp, char *), separator);

	}

}



/**
 *get_op - print_c a character
 *@format: format for the string
 *Return: return the string
 */

void (*get_op(char *format))(char *, va_list, int, int)
{
	int i;

	i = 0;
	switc_h possible_case[] =

	{
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}

	};

	while (i < 4)
	{
		if (strcmp(format, possible_case[i].format) == 0)
		{
			return (possible_case[i].f);

		}
		i++;
	}
	return (possible_case[i].f);
}

















#endif
