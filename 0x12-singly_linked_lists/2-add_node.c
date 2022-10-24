#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: A pointer to the head of the list_t
 * @b: value to be added to the list_t
 *
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int b;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->b = b;
	new->next = *head;
	*head = new;
	return (new);
}
