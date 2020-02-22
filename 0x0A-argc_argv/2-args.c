#include <stdio.h>

/**
 * main - a program tha is going to print all the characters that it recieves
 *@argc: numbers of arguments
 *@argv: array of arguments
 *Return: return arguents
 */

int main(int argc, char *argv[])
{

	if (argc > 0)
	{
		for (; *argv; argv++)
		{
			printf("%s\n", *argv);

		}


	}
	return (0);



}
