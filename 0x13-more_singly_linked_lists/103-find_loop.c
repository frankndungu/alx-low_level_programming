#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the first node of the list
 * Return: address of the node where the loop starts || (NULL) if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
	slow = slow->next;
	fast = fast->next->next;

	if (slow == fast)
	{
	for (slow = head; slow != fast; slow = slow->next, fast = fast->next)
	;
	return (slow);
	}
	}

	return (NULL);
}

