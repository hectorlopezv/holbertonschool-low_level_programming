#include "lists.h"

/**
 *print_listint -  print the elements of a list
 *@h: linked list.
 *Return: the numbers of elements found
 */

size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *temp;

	temp = h;
	i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;

	}

	return (i);
}
