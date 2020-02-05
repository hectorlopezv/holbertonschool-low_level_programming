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
int i;
for (i = 'z'; 'a' <= i ; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}

