#include "3-calc.h"

/**
 *get_op_func - return a pointer to a certain function
 *@s: character that is going to be used the switch
 *Return: return the function
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (ops[i].f != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			break;

		}
		i++;

	}
	return (ops[i].f);
}

