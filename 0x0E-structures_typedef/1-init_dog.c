#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initiate a dog structure
 *@d: dog structure
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: a struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

}
