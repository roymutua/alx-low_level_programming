#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the first node in the list.
 * @idx: index of the node to insert.
 * @n: value.
 *
 * Return: void
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *start, *copy;
	unsigned int b;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		copy = *head;
		for (b = 0; b < idx - 1 && copy != NULL; b++)
		{
			copy = copy->next;
		}
		if (copy == NULL)
			return (NULL);
	}
	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);
	start->n = n;
	if (idx == 0)
	{
		start->next = *head;
		*head = start;
		return (start);
	}
	start->next = copy->next;
	copy->next = start;
	return (start);
}
