#include "lists.h"

/**
 *add_node_end -  add node to the beggining of the list
 *@head: head by reference
 *@str: string to be duplicated
 *Return: return the added element address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *temp;
	list_t *temp_iterator;

	temp_iterator = *head;
	i = 0;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		temp->str = strdup(str);
		for (i = 0; str[i] != '\0'; i++)
		{
		}
		temp->len = i;
	}
	else
	{
		temp->str = NULL;
		temp->len = 0;
	}

	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (temp_iterator->next != NULL)
		{
			temp_iterator = temp_iterator->next;
		}
		temp_iterator->next =  temp;
	}

	return (temp);
}

