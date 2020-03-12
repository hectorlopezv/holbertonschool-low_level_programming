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

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);

		}
		i++;

	}
	return (NULL);
}

