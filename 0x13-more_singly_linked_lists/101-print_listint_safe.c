#include "lists.h"

/**
 *print_listint_safe -  print the elements of a list
 *@head: linked list.
 *Return: the numbers of elements found
 */

size_t print_listint_safe(const listint_t *head)
{
	int i;
	const listint_t *temp;
	temp = head;
	i = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		if (temp <= temp->next)
		{
			printf("-> [%p] %d\n", (void *) temp->next, temp->next->n);
			i++;
			break;
		}
		else
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
			i++;
		}
	}

	return (i);
}
