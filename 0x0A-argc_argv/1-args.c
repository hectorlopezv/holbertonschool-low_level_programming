#include <stdio.h>
/**
 *main - programm that prints number of arguments
 *@argc: number of arguments
 *@argv: array of pointers
 *Return: return a print to the console of numbers of characters
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	if (*argv)
	{

		printf("%d\n", argc - 1);

	}

}
