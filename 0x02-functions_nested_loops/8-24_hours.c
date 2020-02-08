#include "holberton.h"
/**
 * _jack_bauer - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
int i;
int j;
i = 0;
j = 0;
while (j <= 23)
{
while (i <= 59)
{
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
_putchar(':');
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar('\n');
i++;
}

i = 0;
j++;

}
}