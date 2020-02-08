#include "holberton.h"
/**
 *print_alphabet_x10 - uses the print_alphabet to do it 10 times
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
int i;

for (i = 0; i <= 9; i++)
{
print_alphabet();
}

}

/**
 *print_alphabet - uses the print_alphabet func
 *
 *Return: nothing
 */
void print_alphabet(void)
{
int a;
for (a = 'a' ; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');

}
