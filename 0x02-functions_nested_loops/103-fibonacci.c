#include <stdio.h>
#include "holberton.h"

/**
 * main  - fibonacci n=50
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{

long i;
long a;
long b;
long r;
long sum;

a = 0;
b = 1;
r = 0;
sum = 0;

for (i = 0 ; i <= 31 ; i++)
{

r = a + b;
if (r % 2 == 0)
{
sum += r;

}
a = b;
b = r;
}
printf("%lu\n", sum);
return (0);
}

