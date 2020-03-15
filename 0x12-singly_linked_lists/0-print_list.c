#include "lists.h"

/**
 *print_list -  print the content of a node
 *@h: node to evaluate
 *Return: return the printed node
 */

size_t print_list(const list_t *h)
{
	const list_t *head;
	int i;

	i = 0;
	head = h;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{

		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", head->len, head->str);
		}
		head = head->next;
		i++;
	}

	return (i);
}
