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
	listint_t *node_where_they_meet, *start_loop_node;

	node_where_they_meet = checkforloop(head);
	if (node_where_they_meet == NULL)
	{
		return (NULL);
	}
	start_loop_node = get_start_of_node(head, node_where_they_meet);

	return (start_loop_node);



}


/**
 *checkforloop - checkforloop
 *@head: head of the list
 *Return: return the if the is loop or not
 */

listint_t *checkforloop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head, fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (slow);
		}

	}
	return (NULL);

}


/**
 *get_start_of_node - get start of loop
 *@head: head of the list
 *@node: node where they meet
 *Return: return the place where they meet
 */

listint_t *get_start_of_node(listint_t *head, listint_t *node)
{
	listint_t *slow;

	slow = head;

	while (slow != node)
	{
		slow = slow->next;
		node = node->next;
	}
	return (slow);
}

