#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;
for (a = 97; a <= 122; a++)
{
putchar(a);
}
for (b = 97 - 32; b <= 122 - 32; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
