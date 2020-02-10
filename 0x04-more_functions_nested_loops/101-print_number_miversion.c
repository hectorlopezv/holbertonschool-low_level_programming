#include<stdio.h>
#include<math.h>
#include "holberton.h"
/**
 * print_number - check the code for Holberton School students.
 *@n: hello
 * Return: Always 0.
 */

void print_number(int n)
{
	int i, h, o, d;


	if (n > 0)
	{
		i = (int)(log10(n) + 1);
		o = i - 1;
		for (h = 0; h < i; h++)
		{
			d = pow(10, o);
			_putchar(n / d + '0');
			n = n % d;
			o--;
		}

	}
	else if (n < 0)
	{
		_putchar(45);
		n *= -1;
		i = (int)(log10(n) + 1);
		o = i - 1;
		for (h = 0; h < i; h++)
		{
			d = pow(10, o);
			_putchar(n / d + '0');
			n = n % d;
			o--;
		}

	} else if( n == 0)
	{
		_putchar('0');
	}
}
