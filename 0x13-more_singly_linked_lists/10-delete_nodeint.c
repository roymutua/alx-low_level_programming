#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a listint_t.
 * @head: A pointer to the address of the head of the listint_t.
 * @index: The index of the b to be deleted
 *
 * Return: void
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int b;
	listint_t *next, *copy;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	copy = *head;
	for (b = 0; b < index - 1; b++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}
	next = copy->next;
	copy->next = next->next;
	free(next);
	return (1);
}
