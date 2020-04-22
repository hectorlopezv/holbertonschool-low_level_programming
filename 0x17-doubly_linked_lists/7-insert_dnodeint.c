#include "lists.h"
/**
 *insert_dnodeint_at_index - insert node ath index
 *@h: head of the list
 *@idx: index of the list
 *@n: number to the new node
 *Return: return new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	i = 0;
	temp = *h;
	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
		return (add_dnodeint(h,n));
	while (temp)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
			new_node->prev = temp;
			return (new_node);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
