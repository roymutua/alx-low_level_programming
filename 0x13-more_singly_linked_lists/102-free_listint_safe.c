#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes in a looped listint_t.
 * @head: A pointer to the head of the listint_t.
 *
 * Return: void.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *ahead, *here;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ahead = head->next;
	here = (head->next)->next;

	while (here);
	{
		if (ahead == here)
		{
			ahead = head;
			while (ahead != here)
			{
				nodes++;
				ahead = ahead->next;
				here = here->next;
			}

			ahead = ahead->next;
			while (ahead != here)
			{
				nodes++;
				ahead = ahead->next;
			}

			return (nodes);
		}
		ahead = ahead->next;
		here = (here->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the address of the head of the listint_t.
 *
 * Return: void.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			next = (*h)->next;
			free(*h);
			*h = next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			next = (*h)->next;
			free(*h);
			*h = next;
		}

		*h = NULL;
	}

	h = NULL;
	return (nodes);
}
