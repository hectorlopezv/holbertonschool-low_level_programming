#include "holberton.h"
/**
 * jack_bauer - writes the character c to stdout
 *00. to 23.59
 * Return: nothing.
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
