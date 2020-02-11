#include "holberton.h"
#include "stdio.h"
/**
 * print_to_98 - check the code for Holberton School students.
 *@n: integer n
 * Return: Always 0.
 */
void print_to_98(int n)
{
int c;
c = (n > 98) ? 1 : 0;
if (c)
{
while (n >= 98)
{
printf("%d", n);
if (n == 98)

{
printf("\n");
n--;
continue;
}
printf("%c", ',');
printf("%c", ' ');
n--;
}

}
else
{
while (n <= 98)
{
printf("%d", n);
if (n == 98)
{
printf("\n");
n++;
continue;
}
printf("%c", ',');
printf("%c", ' ');
n++;
}


}
}
