#include "function_pointers.h"

/**
 * print_name -  print the name depending of the functions
 *@name: string of the name
 *@f: generic function
 *Return: return nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);

}

