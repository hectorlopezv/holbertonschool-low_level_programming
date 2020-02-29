#include <stdio.h>

int _atoi(char *s);
int adding(char **argv);
int verifiy_special_character(char *s);


/**
 *main - print the multiplication of two numbers
 *@argc: is the numbers of counters
 *@argv: is the array of arguments
 *Return: return multiplication of a,b
 */

int main(int argc, char *argv[])
{
	int counter;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	argv++;

	for (counter = 0; counter < argc - 1; ++argv, ++counter)
	{
		if (verifiy_special_character(*argv) == 1)
		{
			printf("Error\n");
			return (1);

		}
	}

	argv -= counter;
	printf("%d\n", adding(argv));
	return (0);

}

/**
 *adding - add n numbers using recursion
 *@s: a pointer to a pointer
 *Return: a integer with the total addition of the n numbers
 */

int adding(char **s)
{
	if (!*s)
	{
		return (0);
	}

	return (_atoi(*s) +  adding(s + 1));

}

/**
 *verifiy_special_character - verifiy_special_character
 *@p: string were are going to test
 *Return: return 1 if true 0 otherwise
 */

int verifiy_special_character(char *p)
{
	int i;

	for (i = 0 ; p[i] != '\0'; i++)
	{

		if ((p[i] >= 32 && p[i] <= 47) || (p[i] > 57 && p[i] <= 126))
		{
			return (1);
		}

	}

	return (0);
}


/**
 *_atoi - take number out a string
 *@s: string that we are going to test with
 *Return: return 1 if true 0 otherwise
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
