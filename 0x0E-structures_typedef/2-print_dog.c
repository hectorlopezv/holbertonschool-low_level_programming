#include "dog.h"
#include <stdio.h>

/**
 *print_dog - printing the dog
 *@d: the dog
 *Return: nothing
 */

void print_dog(struct dog *d)
{

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);

	}

	printf("Age: %f\n", d->age);


	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}

