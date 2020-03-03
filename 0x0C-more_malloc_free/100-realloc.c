#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _realloc - reallocate memory
 *@ptr: pointer to resize
 *@old size: old size of array
 *@new_size: new size of array
 *Return: return the pointer resized
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);

	}

	if (new_size == old_size)
	{
		return (ptr);
	}


	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);

	}

	if (ptr == NULL)
	{
		ptr = malloc(old_size + new_size);
		if (ptr ==  NULL)
		{
			return (NULL);
		}

	}

	return (ptr);

}

