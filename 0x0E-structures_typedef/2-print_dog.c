#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if ( d == NULL)
	{
		return;
	}
	if (d ->name == NULL)
	{
		printf("(nill)\n");
	}
	if (d ->age == 0.0)
	{
		printf("(nill)\n");

	}
	if (d ->owner == NULL)
	{
		printf("(nill)\n");

	}



}