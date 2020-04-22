#include "lists.h"
/**
 * free_dlistint - free list
 *@head: head of the list
 *Return: free link list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	if (head == NULL)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
	free(temp);
	head = NULL;
}
