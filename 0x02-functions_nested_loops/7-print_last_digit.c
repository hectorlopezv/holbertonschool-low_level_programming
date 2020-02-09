#include "holberton.h"
/**
 * print_last_digit- check the code for Holberton School students.
 *@n: integer n
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int c;
c = (n < 0) ? -1 : 1;
_putchar((n % 10) * c + '0');
return ((n % 10) * c);
}
