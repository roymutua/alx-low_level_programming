#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t.
 * @head: pointer to the first node.
 * @index: index of the node to return.
 *
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b;

	for (b = 0; b < index; b++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
