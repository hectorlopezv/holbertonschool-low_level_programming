#include "holberton.h"
#include <stdlib.h>

/**
 *fill_col - fill col
 *@str: string
 *@c:matrix
 *@height: rows
 *Return: som
 **/

void fill_col(char *str, char **c, int height)
{
	int r;
	int contador = 0;
	int i = 0;

	for (r = 0; r < height; r++)
	{ /* correr por rows y llenar cada 1*/
		for (; str[i] != '\0'; i++)
		{
			if (str[i] > 32 && str[i] < 127)
			{
				c[r][contador] = str[i];
				contador++;

				if (str[i + 1] == 32)
				{
					contador++;/*encontro espacio*/
					c[r][contador] = '\0';
					contador = 0;
					i++;
					break;
				}
			}
		}
	}
	c[r] = NULL;
}


/**
 *allocate_col - allocate in heap col
 *@str: string
 *@c: matrix
 *@height: height
 *Return: return allocated
 **/

void allocate_col(char *str, char **c, int height)
{
	int l;
	int row_t  = 0;
	int contador = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 32 && str[i] < 127)
		{
			contador++;
			if (str[i + 1] == 32)
			{/* llenamos el string*/
				/* entra row veces*/
				contador++;/*tenemos el '\0'*/
				c[row_t] = (char *) malloc(sizeof(char) * contador);
				/* free*/
				if (c[row_t] == NULL)
				{
					for (l = 0; i < height; l++)
					{
						free(c[l]);
					}
					free(c);
				}
				contador = 0;
				row_t++;
			}
		}
	}



}

/**
 *count_n_string - count number of characters
 *@str: string literal
 *Return: return numbers of characters
 **/

int count_n_string(char *str)
{
	int space, i;

	space = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 32 && str[i] < 127)
		{
			if (str[i + 1] == 32)
			{
				space++;
			}
		}


	}
	return (space);
}

/**
 * strtow - split string
 *@str: string to be evaluated
 *Return: returned string
 **/

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	int height;
	char **c;

	height = count_n_string(str);



	c = (char **) malloc(sizeof(char *) * height);
	if (c == NULL)
	{
		return (NULL);
	}

	allocate_col(str, c, height);
	fill_col(str, c, height);


	return (c);
}
