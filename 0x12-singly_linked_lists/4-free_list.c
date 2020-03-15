#include "lists.h"

/**
 *free_list -  add node to the beggining of the list
 *@head: head by reference
 *Return: return the added element address
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}

}
