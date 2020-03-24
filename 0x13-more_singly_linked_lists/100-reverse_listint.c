#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	previous = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}

	while (*head != NULL)
	{
		next =  (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;
	return (previous);

}

