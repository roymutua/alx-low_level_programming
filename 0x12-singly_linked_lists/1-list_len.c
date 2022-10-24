#include "lists.h"
/**
 * list_len - Finds the number of elements
 * @h: The linked list_t list.
 * 
 * Return: 0
 */
size_t list_len(const list_t *h);
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
