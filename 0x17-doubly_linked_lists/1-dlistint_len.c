#include "lists.h"
/**
 *dlistint_len - length of double link list
 *@h: head of the double link list
 *Return: number of nodes of the link list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
