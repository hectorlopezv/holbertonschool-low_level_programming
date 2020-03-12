#include "3-calc.h"

/**
 *op_add - addition operation
 *@a: integer a
 *@b: integer b
 *Return: return the addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substraction operation
 *@a: integer a
 *@b: integer b
 *Return: return the substraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplication operation
 *@a: integer a
 *@b: integer b
 *Return: return the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 *@a: integer a
 *@b: integer b
 *Return: return the division
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
 *op_mod - mod operation
 *@a: integer a
 *@b: integer b
 *Return: return the mod
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

