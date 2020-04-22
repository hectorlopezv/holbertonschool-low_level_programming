#include "lists.h"
/**
 *sum_dlistint - sum number of nodes
 *@head: head of the list
 *Return: return sum of the numbers
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
