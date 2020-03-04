#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog  - free_dog struct when using malloc
 *@d: struct of dog
 *Return: free the dog structure
 */

void free_dog(dog_t *d)
{
	if (d->name == NULL || d->owner == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
