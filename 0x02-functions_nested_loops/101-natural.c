#include <stdio.h>
/**
 * main - prints the sum of all multiples
 * of 3 or 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
int i_3;
i_3 = 340 + 1;/*+1 comes from 1023*/
int sum_3;
sum_3 = 0;
int b_5;
b_5 = 204;
int sum_5;
sum_5 = 0;
int c_15;
c_15 = 68;
int res_15;
res_15 = 15;
int total;
sum_3 = 3 * 0.5 * i_3 * (i_3 + 1);
sum_5 = 5 * 0.5 * b_5 * (b_5 + 1);
res_15 = 15 * 0.5 * c_15 * (c_15 + 1);
total = sum_5 + sum_3 - res_15;
printf("%d\n", total);
return (0);
}
