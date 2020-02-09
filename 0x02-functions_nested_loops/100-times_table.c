#include <stdio.h>
#include "holberton.h"
/**
 *main - print fibo
 *
 *Return: 0
 */

void print_times_table(int n)
{
int row;
int col;
int units;
int tens;
int product;
int hund;
if (n <= 15 && n >= 0)
{
for (row = 0; row <= n; row++)
{
for (col = 0; col <= n; col++)
{
product = row * col;
units = (product % 10);
tens = (product / 10);
if (product > 9 && col <= n && product <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(tens + '0');
_putchar(units + '0');
}
else if (product == 0 && col == 0)
{
_putchar(units + '0');
}
else if (product <= 9 && col >= 1)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(units + '0');
}
else if (product > 99 && col <= n)
{
_putchar(',');
_putchar(' ');
units = (product % 10);
tens = product / 10 % 10;
hund = (product / 100);
_putchar(hund + '0');
_putchar(tens + '0');
_putchar(units + '0');
}
}
_putchar('\n');
}
}
}

