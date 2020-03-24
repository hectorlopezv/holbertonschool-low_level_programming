#include "lists.h"

/**
 *delete_nodeint_at_index - get node at index n
 *@head: is the head of the pointer
 *@index: index of the node to be returned
 *Return: return the node of n position
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp_it, *temp2;

	i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	temp_it = *head;
	if (index == 0)
	{

		*head = (*head)->next;
		free(temp_it);

		return (1);
	}

	for (; i < index - 1 && temp_it != NULL ; i++)
	{
		temp_it = temp_it->next;
	}
	temp2 = temp_it->next;
	if (temp2 == NULL)
	{
		return (-1);
	}
	temp_it->next = temp2->next;

	free(temp2);
	return (1);
}
