#include "variadic_functions.h"

/**
 *print_c - print_c a character
 *@temp: va_list
 *Return: return the string
 */

void print_c(va_list temp)
{
	printf("%c", va_arg(temp, int));

}


/**
 *print_i - print_c a character
 *@temp: va_list *     *@size:number of formats
 *Return: return the string
 */

void print_i(va_list temp)
{
	printf("%d", va_arg(temp, int));
}

/**
 *print_f - print_c a character
 *@temp: va_list
 *Return: return the string
 */

void print_f(va_list temp)
{
	printf("%f", va_arg(temp, double));

}


/**
 *print_s - print_c a character
 *@temp: va_list
 *Return: return the string
 */

void print_s(va_list temp)
{

	printf("%s", va_arg(temp, char *));
}




/**
 *print_all - print_all the characters
 *@format: print the format of the char
 *Return: return the printed value
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	void (*f)(va_list temp);
	char buffer[2];
	char *space;

	space = "";
	i = 0;

	va_start(args, format);

	while (i < strlen(format))
	{
		buffer[0] = format[i];
		buffer[1] = '\0';
		f = get_op(buffer);
		if (f != NULL)
		{
			printf("%s", space);
			f(args); /* imprimira algo */
			space = ", ";

		}
		i++;

	}


	printf("\n");
	va_end(args);
}


/**
 *get_op - l
 *@format: format
 *Return: return
 */

void (*get_op(char *format))(va_list)
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

