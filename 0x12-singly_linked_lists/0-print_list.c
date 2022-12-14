#include "lists.h"
/**
 * print_list - Prints the entry point.
 * @h: The list_t list.
 * b: value
 *
 * Return: 0.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return(0);

	while (h != NULL)
	{
		printf("%d\n", h->b);
		h = h->next;
		count++;
	}

	return (count);
}
