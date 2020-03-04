#include "function_pointers.h"


/**
 *int_index -  int_index
 *@array: array of intergers
 *@size: size of the array
 *@cmp: function_pointers
 *Return: return the index where the condition is met
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
