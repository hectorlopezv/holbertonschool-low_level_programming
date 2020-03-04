#include "dog.h"
#include <stdio.h>

/**
 * dog_t - creates a dog struct
 *@name: name
 *@age:
 *@owner:
 *Return: return a struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog st;
	struct dog *std;
	std = &st;

	std -> name = name;
	std -> age = age;
	std -> owner = owner;
	return (std);
}