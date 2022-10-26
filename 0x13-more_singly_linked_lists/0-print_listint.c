#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t.
 *
 * Return: value.
 */
size_t print_listint(const listint_t *h)
{
	size_t value = 0;

	while (h)
	{
		value++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (value);
}
