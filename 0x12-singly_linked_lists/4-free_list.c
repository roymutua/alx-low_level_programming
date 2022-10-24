#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that frees a list_t
 * @head: input header pointer
 * Return: 0.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
