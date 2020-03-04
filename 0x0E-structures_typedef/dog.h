#ifndef DOG_H
#define DOG_H

/**
 *dog - struct containing name,age,owner of a dog
 *Return: struct of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
