#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t.
 * @head: double pointer to the beginning.
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (*head == NULL)
		return (0);
	start = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(start);

	return (n);
}
