#include "lists.h"


/**
 *free_listint2 - free a list
 *@head: is a copy of a list
 *Return: return nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;


	if (*head == NULL || head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;



}
