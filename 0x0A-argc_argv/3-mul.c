#include <stdio.h>

/**
 *main - print the multiplication of two numbers
 *@argc: is the numbers of counters
 *@argv: is the array of arguments
 *Return: return multiplication of a,b
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	a = 0;
	b = 0;
	result = 0;

	if (argc == 3)
	{
		a = *(*(argv + 1)) - 48;
		b = *(*(argv + 2)) - 48;
		result = a * b;
		printf("%d\n", result);
		return (0);
	}


	printf("Error\n");
	return (1);

}

