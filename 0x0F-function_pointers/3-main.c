#include "3-calc.h"

/**
 * main - program to compute certain operations
 *@argc: numbers of parameters
 *@argv: array of strings
 *Return: the result for each operation
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}

