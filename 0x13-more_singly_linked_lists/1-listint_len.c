#include "lists.h"

/**
 *listint_len -  print the elements of a list
 *@h: linked list.
 *Return: the numbers of elements found
 */


size_t listint_len(const listint_t *h)
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
		temp = temp->next;
		i++;
	}
	return (i);
}
