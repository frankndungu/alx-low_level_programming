#include <stdio.h>
#include "lists.h"

size_t count_unique_nodes_in_loop(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * count_unique_nodes_in_loop - counts the number of unique nodes
 * @head: pointer
 * Return: If the list is not looped - 0
 */
size_t count_unique_nodes_in_loop(listint_t *head)
{
	listint_t *slow, *fast;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	slow = head->next;
	fast = head->next->next;

	while (fast != NULL && fast->next != NULL)
	{
	if (slow == fast)
	{
	slow = head;
	while (slow != fast)
	{
	count++;
	slow = slow->next;
	fast = fast->next;
	}

	slow = slow->next;
	while (slow != fast)
	{
	count++;
	slow = slow->next;
	}

	return (count);
	}

	slow = slow->next;
	fast = fast->next->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer
 * Return: The size of the list that was freed.
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t count, i;

	count = count_unique_nodes_in_loop(*h);

	if (count == 0)
	{
	for (i = 0, current = *h; current != NULL; i++)
	{
	tmp = current;
	current = current->next;
	free(tmp);
	}
	}
	else
	{
	for (i = 0, current = *h; i < count; i++)
	{
	tmp = current;
	current = current->next;
	free(tmp);
	}
	}

	*h = NULL;

	return (count);
}
