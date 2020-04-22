#include "lists.h"
/**
 *add_dnodeint_end - add_node to the end
 *@head: head of the link list
 *@n: number to put in new node
 *Return: return new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp_node;

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
	{
		*head = new_node;
		return (new_node);
	}
	while (temp_node && temp_node->next)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new_node;
	new_node->prev = temp_node;
	return (new_node);
}
