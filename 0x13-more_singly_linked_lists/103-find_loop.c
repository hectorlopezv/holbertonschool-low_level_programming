#include "lists.h"

listint_t *checkforloop(listint_t *head);
listint_t *get_start_of_node(listint_t *head, listint_t *node);

/**
 *find_listint_loop - find loop in a linked list
 *@head: head of the list
 *Return: return
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	slow = fast = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			break;
		}
	}
	if (slow == NULL || fast == NULL || fast->next == NULL)
	{
		return (NULL);
	}
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);

}
