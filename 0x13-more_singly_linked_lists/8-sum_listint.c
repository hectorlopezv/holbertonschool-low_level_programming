#include "lists.h"

/**
 *sum_listint - sum of the elemetns in a linked list
 *@head: copy of the head
 *Return: the sum of each element in the linked list
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;

	}
	return (sum);

}
