#include "function_pointers.h"

/**
 * array_iterator -  array printer
 *@size: size of the array
 *@action: is a function_pointers
 *Return: return the print of array in stdio
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++, array++)
	{
		action(*array);
	}
}
