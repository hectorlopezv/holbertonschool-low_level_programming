#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_2d: free 2d matrix
 *@grid: matrix
 *@height: the height
 *Return: return matrix
 */

void free_2d(char **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

/**
 *count_spaces - count_spaces
 *@str: string to be evaluated
 *Return: return the string first string without spaces
 */

int count_spaces(char *str)
{
	int contador, i;

	contador = 0;

	for (i = 0; str[i] != '\0'; i++)
	{



		if (str[i] == 32)
		{
			contador++;
			if (str[i + 1] > 32 && str[i + 1] < 127)
			{
				break;
			}
		}

		if (str[i + 1] > 32 && str[i + 1] < 127)
		{
			break;
		}
	}
	return (contador);
}

/**
 * count_n_string - count the number of strings
 *@str: string
 *Return: return number of strings to be splited
 */

int count_n_string(char *str)
{
	int space, i;

	space = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 32 && str[i] < 127)
		{
			if (str[i + 1] == 32 || str[i + 1] == 0)
			{
				space++;
			}
		}


	}
	return (space);
}

/**
 * place_string - count the number of colums of a the splited string
 *@str: string to be explited
 *Return: returned string
 */

int place_string(char *str)
{
	int contador;

	contador = 0;

	for (; *str != '\0'; str++)
	{
		if (*str > 32 && *str < 127)
		{       contador++;
			if (*(str + 1) == 32)
			{
				break;
			}
		}
	}

	return (contador);
}

/**
 *strtow - give a array of splited strings
 *@str: string to be evaluated
 *Return: return the array of strings
 */

char **strtow(char *str)
{
	int rows, i, col, l;
	char **str_array;

	if (str == NULL || *str == '\0')/* case 1*/
	{return (NULL);
	}
	if (count_n_string(str) == 0)/* case 2 */
	{return (NULL);
	}
	str += count_spaces(str);/* move the string to the initial one*/
	rows = count_n_string(str) + 1;
	str_array = malloc(sizeof(char *) * rows);/*alloc for rows*/
	if (str_array == NULL)/* manage exception*/
	{
		return (NULL);
	}
	for (i = 0; i < rows - 1; i++)
	{
		col = place_string(str) + 1;/* # of char per string*/
		str_array[i] = (char *) malloc(sizeof(char) * col);
		if (str_array[i] == NULL)/* free if null*/
		{
			free_2d(str_array, rows);
		}
		for (l = 0; l < col; l++)/* fill allocated string*/
		{
			str_array[i][l] = str[l];
			if (l  == col - 1)
			{
				str_array[i][l] = '\0';
			}
		}
		str += col;
		if (*str == 32)
		{
			str += count_spaces(str);
		}
	}
	str_array[rows] = NULL;
	return (str_array);
}

