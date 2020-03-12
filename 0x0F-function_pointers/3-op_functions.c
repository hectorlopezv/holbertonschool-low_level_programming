#include "3-calc.h"

/**
 * op_add - ad
 * @a: f
 * @b: se
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: f
 * @b: se
 * Return: subctraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: f
 * @b: s
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: first
 * @b: s
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod
 * @a: fi
 * @b: se
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
