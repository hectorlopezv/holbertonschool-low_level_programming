#include "holberton.h"
#include <stdio.h>

int check_if_printable(char *b, int f, int s);
void put_spaces_if_the_is_no_char(int *contador_vacio, int *contador);
void put_hexadecimal_of_byte(int *contador, int *size, char *b, int *i);

/**
 * print_buffer - check the code for Holberton School students.
 *@b: string
 *@size: size of the string
 *Return: Always 0.
 */

void print_buffer(char *b, int size)
{
	int i, linea, contador, f, s, contador_vacio;

	i = 0;
	linea = 0;
	contador = 0;
	f = 0;
	s = 0;
	contador_vacio = 0;

	int *pointer_contador;

	pointer_contador = &contador;

	int *pointer_contador_vacio;

	pointer_contador_vacio = &contador_vacio;

	int *pointer_i;

	pointer_i = &i;

	int *pointer_size;

	pointer_size = &size;

	while (size >= 0)
	{
		printf("%08x: ", linea);
		contador = 0;
		contador_vacio = 0;
		put_hexadecimal_of_byte(pointer_contador, pointer_size, b, pointer_i);
		put_spaces_if_the_is_no_char(pointer_contador_vacio, pointer_contador);

		if (contador_vacio < 9)
		{
			s = f - contador_vacio;
		}
		else
		{
			s = f;
		}
		f = check_if_printable(b, f, s);
		printf("\n");
		linea += 10;
	}
}

/**
 *put_hexadecimal_of_byte - check the code for Holberton School students.
 *@contador: contador
 *@size: size of the string
 *@b:string
 *@i:counter
 *Return: Always 0.
 */

void put_hexadecimal_of_byte(int *contador, int *size, char *b, int *i)
{
	int h;

	for (h = 0; h <= 9; h++)
	{
		if (*size == 0)
		{
			*i = *i + 1;
			*size = *size - 1;
			break;
		}
		printf("%02x", b[*i]);

		if (h % 2 != 0)
		{
			printf(" ");
		}

		*contador = *contador + 1;
		*i = *i + 1;
		*size = *size - 1;
	}
}


/**
 *put_spaces_if_the_is_no_char - check the code for Holberton School students.
 *@contador_vacio: contador vacio
 *@contador: contador
 *Return: Always 0.
 */

void put_spaces_if_the_is_no_char(int *contador_vacio, int *contador)
{
	while (*contador <= 9)
	{
		if (*contador == 9)
		{
			printf(" ");
		}
		else
		{
			printf("  ");
			printf(" ");
		}
		*contador = *contador + 1;
		*contador_vacio = *contador_vacio + 1;
	}
}

/**
 *check_if_printable - check the code for Holberton School students.
 *@b: string
 *@f: counter
 *@s: counter 2
 *Return: Always 0.
 */

int check_if_printable(char *b, int f, int s)
{
	for (; f <= s + 9; f++)
	{
		if (b[f] >= ' ' && b[f] <= '~')
		{
			printf("%c", b[f]);
		}
		else
		{
			printf(".");
		}
	}
	return (f);
}

