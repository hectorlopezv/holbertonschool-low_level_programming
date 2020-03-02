#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

void fill_col(char * str,char **c,int height)
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

				if(str[i + 1] == 32)
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


void allocate_col(char * str,char **c,int height)
{
	int l;
	int row_t  = 0;
	int contador = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 32 && str[i] < 127)
		{
			contador++;
			if(str[i + 1] == 32)
			{/* llenamos el string*/
				/* entra row veces*/
				contador++;//tenemos el '\0'
				c[row_t] = (char *) malloc(sizeof(char) *contador);
				/* free*/
				if (c[row_t] == NULL)
				{
					for (l = 0; i < height; l++)
					{
						free(c[i]);
					}
					free(c);
				}
				contador = 0;
				row_t++;
			}
		}
	}



}

int count_n_string(char *str)
{
	int space, i;

	space = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ( str[i] > 32 && str[i] < 127)
		{
			if (str[i + 1] == 32)
			{
				space++;
			}
		}


	}
	return (space);
}


char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	int height;

	height = count_n_string(str);
	char **c ;


	c = (char **)malloc(sizeof(char *) * (height ));
	if (c == NULL)
	{
		return (NULL);
	}

	allocate_col(str,c,height);
	fill_col(str,c,height);


	return (c);
}
