#include "lists.h"

/**
 *insert_nodeint_at_index - get node at index n
 *@head: is the head of the pointer
 *@idx: index of the node to be returned
 *@n: number
 *Return: return the node of n position
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp_it, *temp;


	i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	temp_it = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	for (; i < idx - 1  && temp_it != NULL; i++)
	{
		temp_it = temp_it->next;
	}

	if (temp_it != NULL)
	{
		temp->next = temp_it->next;
		temp_it->next = temp;
	}
	if (temp_it == NULL)
	{
		return (NULL);
	}
	return (temp);
}

