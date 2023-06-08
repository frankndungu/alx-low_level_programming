#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: pointer
 * Return: The data of the deleted head node || 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current_node;

	if (*head == NULL)
	return (0);

	current_node = *head;
	n = current_node->n;
	*head = current_node->next;
	free(current_node);

	return (n);
}
