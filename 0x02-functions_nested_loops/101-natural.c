#include <stdio.h>

/**
 * main - prints the sum of all multiples
 * of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
int a_3, b_5, c, p;
c = 0;
for (p = 0; p <= 1023; p++)
{
a_3 = p % 3;
b_5 = p % 5;
if (a_3 == 0 || b_5 == 0)
{
c += p;
if (a_3 == 3 && b_5 == 0)
{
c -= p;
}

}
}
printf("%d\n", c);
return (0);
}


