#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: index of the node to return
 * Return: pointer to the nth node of the listint_t || (NULL) if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int i;

	for (i = 0; current_node != NULL && i < index; i++)
	current_node = current_node->next;

	return (current_node == NULL || i < index ? NULL : current_node);
}

