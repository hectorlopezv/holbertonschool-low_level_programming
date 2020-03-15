#include "lists.h"

/**
 *add_node -  add node to the beggining of the list
 *@head: head by reference
 *@str: string to be duplicated
 *Return: return the added element address
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *temp;

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
	temp->next = *head;
	*head = temp;


	return (temp);
}
