#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to (NULL)
 * @head: pointert
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
	{
	return;
	}

	while (*head)
	{
	current_node = (*head)->next;
	free(*head);
	*head = current_node;
	}
}
