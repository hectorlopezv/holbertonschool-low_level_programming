#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int checkif_num(char *s);
int size_str(char *s);

/**
 * main - multiple two positive numbers, it takes two arg
 * @argc: argument count
 * @argv: number to multiply
 * prints out num
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int s1_size, s2_size, i, j, d2, d1, n, l;
	int *str;
	int contador;

	contador = 0;
	l = 0;
	if (argc != 3)
	{	printf("Error\n");
		exit(98);
	}
	if (checkif_num(argv[1]) == 0 || checkif_num(argv[2]) == 0)
	{	printf("Error\n");
		exit(98);
	}
	s1_size = size_str(argv[1]);
	s2_size = size_str(argv[2]);
	str = calloc(s2_size + s1_size, sizeof(int *));
	if (str == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (j = s2_size - 1; j >= 0; --j)
	{
		for (i = s1_size - 1; i >= 0; --i)
		{
			n = (argv[2][j] - '0') * (argv[1][i] - '0');
			d2 =  n > 9 ? n / 10 : 0;
			d1 = n % 10;
			str[j + i + 1] +=  d1;
			str[j + i] += d2;
		}
	}
	for (i = s1_size + s2_size - 1; i >= 0; --i)
	{
		d2 = str[i] > 9 ? str[i] / 10 : 0;
		d1 = str[i] % 10;
		str[i] = d1;
		if (i != 0)
		{
			str[i - 1] += d2;
		}
	}
	for (l = 0; l < s1_size + s2_size; l++)
	{
		if (str[l] == 0)
		{
			contador++;
		}

	}
	if (contador == s1_size + s2_size)
	{
		printf("0\n");
		free(str);
		return (0);
	}
	if (str[0] == 0)
	{	l = 1;
	}
	else
	{
		l = 0;
	}
	for (; l < s1_size + s2_size; l++)
	{
		printf("%d", str[l]);
	}
	printf("\n");
	free(str);
	return (0);
}

/**
 *checkif_num - k
 *@s:string
 *Return: return legnth
 */

int checkif_num(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{

			return (0);
		}

	}

	return (1);


}

/**
 *size_str -  size
 *@s:string
 *Return: return size
 */

int size_str(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}

	return (i);
}

