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
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
putchar(i);
putchar(j);
if (i == '9' && j == '9')
{
continue;
}
putchar(',');
}
}
putchar('\n');
return (0);
}
