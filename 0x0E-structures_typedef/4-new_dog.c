#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a dog struct
 *@name: name
 *@age: age
 *@owner: owner
 *Return: return a struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *std = malloc(sizeof *std);

	if (std == NULL)
	{
		return (NULL);
	}

	std->name = name;
	std->age = age;
	std->owner = owner;

	return (std);
}
