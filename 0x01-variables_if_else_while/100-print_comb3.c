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
int j;
int k;
k = 0;
for (i = 0; i <= 9; i++)
{
for (j = i+1; j <= 9; j++)
{
if ( i == j )
{
continue;
}
if (j == k - 1)
{
continue;
}
putchar(i + '0');
putchar(j + '0');
if (i == 8 && j == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
k += 1;
}
putchar('\n');
return (0);
}
