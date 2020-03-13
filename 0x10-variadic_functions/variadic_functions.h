#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);


struct cases
{
	char *format;
	void (*f)(va_list temp);
};

typedef struct cases switc_h;


void print_c(va_list temp);

int _str_len(const char *const format);

void print_i(va_list temp);

void print_f(va_list temp);

void print_s(va_list temp);

void (*get_op(char *format))(va_list);

#endif
