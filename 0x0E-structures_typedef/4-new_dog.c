#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a dog struct
 *@name: name
 *@age: age
 *@owner: owner
 *Return: return a struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t st;
	dog_t *std;

	std = &st;

	std->name = name;
	std->age = age;
	std->owner = owner;

	return (std);
}
