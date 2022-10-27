#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t.
 * @head: A pointer to the address of the head of the list_t.
 *
 * Return: void.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *behind, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	behind = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = next;

	}
	*head = behind;

	return (*head);
}
