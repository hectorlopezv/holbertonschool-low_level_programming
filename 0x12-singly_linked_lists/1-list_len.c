#include "lists.h"

/**
 *list_len -  print the content of a node
 *@h: node to evaluate
 *Return: return the printed node
 */


size_t list_len(const list_t *h)
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
		head = head->next;
		i++;
	}

	return (i);
}
