#include "lists.h"
/**
 *add_nodeint - add node at the beggining
 *@head: list pass as a reference
 *@n: number we are going to push
 *Return: the node that was added to the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

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

	temp->next = *head;
	*head = temp;

	return (temp);

}
