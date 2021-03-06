#include "lists.h"


/**
 *free_listint - free a list
 *@head: is a copy of a list
 *Return: return nothing
 */


void free_listint(listint_t *head)
{
	listint_t *temp;


	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}

