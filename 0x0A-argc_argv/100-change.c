#include <stdio.h>

int _atoi(char *s);
int cents(int n);
int verifiy_special_character(char *s);

/**
 *main - program to compute change in cents
 *@argc: number of parameters
 *@argv: array of pointers containing parameters
 *Return: print the numbers of cents needed for the change
 */

int main(int argc, char *argv[])
{

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	argv++;
	if (_atoi(*argv) < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", cents(_atoi(*argv)));
	return (0);

}

/**
 *cents - counts cents needed for this amount
 *@n: the number or amount we are going to test
 *Return: the amount of cents needed
 */

int cents(int n)
{
	int counter;

	counter = 0;
	do

	{

		if (n / 25 > 0)
		{
			n = n - 25;
			counter++;
			continue;


		}
		else if (n / 10 > 0)
		{
			n = n - 10;
			counter++;
			continue;

		}
		else if (n / 5 > 0)
		{
			n = n - 5;
			counter++;
			continue;

		}
		else if (n / 2 > 0)
		{
			n = n - 2;
			counter++;
			continue;

		}
		else if (n / 1 > 0)
		{
			n = n - 1;
			counter++;
			continue;
		}

	} while (n != 0);

	return (counter);

}

/**
 *verifiy_special_character - verifiy_special_character if there is - sign
 *@p: is a pointer to a string..
 *Return: return 1 if true 0 otherwise
 */

int verifiy_special_character(char *p)
{
	if (p[0] == '-')
	{
		return (1);
	}
	return (0);
}

/**
 *_atoi - convert string to int
 *@s:strig
 *Return: integer
 */

int _atoi(char *s)
{
	int n, contador;
	int str, y, i;

	str = 0;
	y = 0;
	i = 0;
	n = 1;
	contador = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if ((contador > 0) && (s[i] == ' '))

		{
			str = str;
			break;
		}

		if (s[i] == '-')
		{
			n = n * -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			contador++;
			y = s[i] - '0';

			str = (str * 10) + y;
		}
	}


	return (str * n);
}

