#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements.
 * @h: A pointer to the head of the listint_t.
 *
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t value = 0;

	while (h)
	{
		value++;
		h = h->next;
	}

	return (value);
}
