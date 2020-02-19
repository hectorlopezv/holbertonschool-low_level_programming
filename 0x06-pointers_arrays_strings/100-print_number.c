#include "holberton.h"
/**
 * print_number - check the code for Holberton School students.
 *@n: hello
 * Return: Always 0.
 */

int sacar_digitos(int n);
int sacar_divisor(int n);

void print_number(int n)
{
	int i, h, o, d;

	if (n > 0)
	{

		i = sacar_digitos(n);
		o = i - 1;
		for (h = 0; h < i; h++)
		{
			d = sacar_divisor(o);
			_putchar(n / d + '0');
			n = n % d;
			o--;
		}

	}
	else if (n < 0)
	{
		_putchar(45);
		i = sacar_digitos(n);
		o = i - 1;
		for (h = 0; h < i; h++)
		{
			d = sacar_divisor(o);
			_putchar(((n / d) * -1) + '0');
			n = n % d;
			o--;
		}

	} else if (n == 0)
	{
		_putchar('0');
		return;
	}
}


/**
 * sacar_digitos - check the code for Holberton School students.
 *@n: hello
 * Return: Always 0.
 */
int sacar_digitos(int n)
{
	int count = 0;

	if (n < 0)

	{
		while (n < 0)
		{
			n = n / 10;
			count++;
		}
	} else

	{

		while (n > 0)
		{
			n = n / 10;
			count++;
		}

	}


	return (count);
}

/**
 * sacar_divisor - check the code for Holberton School students.
 *@n: hello
 * Return: Always 0.
 */

int sacar_divisor(int n)
{
	int divisor;

	if (n < 0)
	{
		n = n * -1;

	}

	divisor = 1;

	for (; n != 0; n--)
	{
		divisor *= 10;
	}

	return (divisor);
}
