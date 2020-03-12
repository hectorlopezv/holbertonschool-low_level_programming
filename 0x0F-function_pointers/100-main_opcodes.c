#include <stdio.h>
#include <stdlib.h>

/**
 *main - main to print n bytes of pointer of addres
 *@argc: number of arguments
 *@argv: string of strings
 *Return: nothing
 */

int main(int argc, char *argv[])
{
	int number_bytes, i;
	unsigned char *start = (unsigned char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_bytes = atoi(argv[1]);
	if (number_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/*printf("0x%08x\n",f);*/

	for (i = 0; i < number_bytes; i++, start++)
	{
		printf("%02x ", *start);
	}
	printf("\n");

}
