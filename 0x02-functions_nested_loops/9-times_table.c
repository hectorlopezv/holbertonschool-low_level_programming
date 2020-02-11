#include "holberton.h"
/**
 * times_table - writes the character c to stdout
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
int i;
int n;
int p;
n = 0;
i = 0;
p = 0;
while (i <= 9)
{
while (n <= 9)
{
p = i *n;
if (p > 9)
{
_putchar(',');
_putchar(' ');
_putchar(p / 10 + '0');
_putchar(p % 10 + '0');

}
else
{
if (n == 0)
{
_putchar(p + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(p + '0');
}
}
n++;
}
_putchar('\n');
n = 0;
i++;
}

}


