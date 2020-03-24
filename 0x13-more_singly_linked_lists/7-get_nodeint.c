#include "lists.h"

/**
 *get_nodeint_at_index - get node at index n
 *@head: is the head of the pointer
 *@index: index of the node to be returned
 *Return: return the node of n position
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL && i <= index)
	{
		if (i == index)
		{
			break;
		}
		head = head->next;
		i++;
	}
	if (head == NULL && (i != index))
	{
		return (NULL);
	}
	return (head);


}

