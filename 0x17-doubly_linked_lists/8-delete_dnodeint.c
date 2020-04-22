#include "lists.h"
/**
 *delete_dnodeint_at_index - delete node at certain position
 *@head: head of the list
 *@index: index of the  node to be deleted
 *Return: 1 on success ,-1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i;

	i = 0;
	temp = *head;
	if (head == NULL)
		return (-1);
	if (temp == NULL)
		return (-1);
	if (index == 0 && temp->next == NULL)
	{
		free(*head), *head = NULL;
		return (1);
	}
	if (index == 0)
	{
		*head = (*head)->next, (*head)->prev = NULL, free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
			prev = temp->prev;
			prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = prev;
			free(temp);
			temp = NULL;
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
