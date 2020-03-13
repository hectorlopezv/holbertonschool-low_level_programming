#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void (* get_op(char *format) )(char *, va_list, int, int);

struct cases
{
	    char *format;
		    void (*f) (char * separator,va_list temp,int size,int contador_space);
};
typedef struct cases switc_h;


void print_c(char * separator,va_list temp,int size,int contador_space);
int _str_len(const char * const format);

void print_i(char * separator,va_list temp,int size,int contador_space);

void print_f(char * separator,va_list temp,int size,int contador_space);

void print_s(char * separator,va_list temp,int size,int contador_space);


#endif
