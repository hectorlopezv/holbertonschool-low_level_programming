#include "lists.h"
/**
 *add_nodeint_end - add node at the beggining
 *@head: list pass as a reference
 *@n: number we are going to push
 *Return: the node that was added to the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *temp_it;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	temp_it = *head;

	while (temp_it != NULL && temp_it->next != NULL)
	{
		temp_it = temp_it->next;

	}

	temp_it->next = temp;

	return (temp);

}
