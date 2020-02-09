#include <stdio.h>
#include "holberton.h"
/**
 * main - prints the sum of all multiples
 * of 3 or 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
int i_3, b_5, c_15, sum_3, sum_5, res_15, total;
i_3 = 341;
b_5 = 204;
c_15 = 68;
res_15 = 15;
sum_3 = 3 * 0.5 * i_3 * 342;
sum_5 = 5 * 0.5 * b_5 * 205;
res_15 = 15 * 0.5 * c_15 * 69;
total = sum_5 + sum_3 - res_15;
printf("%d\n", total);
return (0);
}


