#include "lists.h"
#include <stdio.h>

/**
 * _r - reallocates memory for an array of pointers.
 * @list: the old list to appen.d
 * @size: size of the new list.
 * @new: to add to the list.
 *
 * Return: void.
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **startlist;
	size_t b;

	startlist = malloc(size * sizeof(listint_t *));
	if (startlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (b = 0; b < size - 1; b++)
		startlist[b] = list[b];
	startlist[b] = new;
	free(list);
	return (startlist);
}

/**
 * print_listint_safe - prints a listint_t.
 * @head: pointer to the start of the list.
 *
 * Return: 0
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t b, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		 for (b = 0; b < num; b++)
		 {
			 if (head == list[b])
			 {
				 printf("-> [%p] %d\n", (void *)head, head->n);
				 free(list);
				 return (num);
			 }
		 }
		 num++;
		 list = _r(list, num, head);
		 printf("[%p] %d\n", (void *)head, head->n);
		 head = head->next;
	}
	free(list);
	return (num);
}
