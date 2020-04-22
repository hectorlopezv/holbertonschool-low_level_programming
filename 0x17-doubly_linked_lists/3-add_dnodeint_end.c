#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp_node, *prev_node;

	if (head == NULL)
		return (NULL);
	temp_node = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
		*head = new_node;
	while (temp_node)
	{	prev_node = temp_node;
		temp_node = temp_node->next;
	}
	prev_node->next = new_node;
	new_node->prev = prev_node;
	return (new_node);
}
