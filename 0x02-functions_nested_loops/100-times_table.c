#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
int i;
int j;
int p;
int on;
int te;
int hu;
j = 0;
i = 0;
p = 0;
if (n>=0 && n<=15){
while (i <= n)
{
while (j <= n)
{
p = i *j;
on = p % 10;
te = p / 10 % 10;
hu = p / 100;

if (j!=0 && hu==0)
{
/*caso de 10*/
_putchar(',');
if (te ==0)
{
/*we are verifyin if is n is 0-9 and print on */
_putchar(' ');
}else
{
/* 10-99 case */
_putchar(' ');
_putchar(te + '0');
_putchar(on + '0');
}



}else if (hu !=0)
{

_putchar(hu +'0');
_putchar(te + '0');
_putchar(on + '0');

}

if (j ==0){_putchar('0');}
if (j !=n){
_putchar(',');
_putchar(' ');
}
}
i++;
j=0;
_putchar('n');


}



}
/*ends here*/
}
