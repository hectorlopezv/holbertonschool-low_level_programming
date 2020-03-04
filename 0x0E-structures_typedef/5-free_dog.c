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
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		free(d->owner);
		free(d);
	}
	else if (d->owner == NULL)
	{
		free(d->name);
		free(d);
	}
	else
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
