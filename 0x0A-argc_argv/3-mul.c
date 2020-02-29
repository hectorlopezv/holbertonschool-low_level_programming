#include <stdio.h>


int _atoi(char *s);
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
		a = _atoi(*(argv + 1));
		b = _atoi(*(argv + 2));
		result = a * b;
		printf("%d\n", result);
		return (0);
	}


	printf("Error\n");
	return (1);

}

/**
 *_atoi - convert string to a number
 *@s: string to convert to an interger
 *Return: return a string
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
