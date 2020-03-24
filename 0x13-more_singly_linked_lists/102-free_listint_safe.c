#include "lists.h"


/**
 *free_listint_safe - free a list
 *@h: is a copy of a list
 *Return: return nothing
 */


size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	int i;

	temp = *h;

	if (h == NULL)
	{
		return (0);
	}

	while (*h != NULL)
	{
		if (temp <= temp->next)
		{
			i++;
			free(temp);
			*h = NULL;
			break;
		}
		else
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;

			i++;
		}
	}

	h = NULL;

	return (i);
}
