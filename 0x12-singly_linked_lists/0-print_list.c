#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
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
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
