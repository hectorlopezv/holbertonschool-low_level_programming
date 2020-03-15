#include "lists.h"


/**
 *pop_listint -  pop the head of the list
 *@head: pass head by reference
 *Return: return the data of the node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
	{
		return (0);
	}

	temp = (*head)->next;
	(*head)->next = NULL;
	i = (*head)->n;
	free(*head);
	*head = temp;

	return (i);

}
