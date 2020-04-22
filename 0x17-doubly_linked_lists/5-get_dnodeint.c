#include "lists.h"
/**
 *get_dnodeint_at_index - getnode at index n
 *@head: head of the node
 *@index: index of the node to get
 *Return: return the desired node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
