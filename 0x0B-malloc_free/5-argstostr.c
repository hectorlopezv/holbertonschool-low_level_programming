#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr - use malloc to concatenate string of variable legnth
 *@ac: numbers of arguments
 *@av : array of arguments
 *Return: pointer containing all concatenated strings with a new line
 */

char *argstostr(int ac, char **av)
{
        if (ac == 0 || av == NULL)
        {
                return (NULL);
        }
        int  sum_char, count, count1, counter, numeros;
        char *C;

        sum_char = 0;
        counter = 0;
        numeros = 0;
	count1 = 0;
	count = 0;

        /*while (counter < ac)*/
        /*{*/
             /*   sum_char += _strlen(*av) + 1;*/
                /*av++;*/
                /*counter++;*/
        /*}*/
        /*sum_char = sum_char + 1;*/
        
        /*printf("%d",sum_char);*/
        
        for (count = 0; count < ac; count++)
	{
		for (count1 = 0; av[count][count1] != '\0'; count1++)
		{
			sum_char += 1;
		}
		sum_char += 1;
	}
	sum_char += 1;
        
        C = malloc(sum_char);
        
        if (C == NULL)
        {
                free(C);
                return (NULL);
        }

        counter = 0;

        while (counter < ac)
        {
                for (int j = 0; *(*(av + counter) + j) != '\0'; j++)
                {
                        C[numeros] = *(*(av + counter) + j);
                        numeros++;
          

                }
                
                C[numeros] = '\n';
                counter++;
                numeros++;

        }
         C[numeros] = '\0';

        return (C);
}
