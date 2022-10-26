#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t.
 * @head: double pointer to the beginning.
 * @n: integer
 *
 * Return: 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *start, *end;

	start = malloc(sizeof(listint_t));
	if(start == NULL)
		return (NULL);

	start->n = n;
	start->next = NULL;

	if (*head == NULL)
		*head = start;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = start;
	}

	return (*head);
}
