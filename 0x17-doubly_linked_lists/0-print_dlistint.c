#include "lists.h"
/**
 * print_dlistint -  print number of node and number of nodes
 *@h: header of double link list
 *Return: return number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
