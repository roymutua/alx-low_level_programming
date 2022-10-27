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
				ahead = ahead->next;
				here = here->next;
			}

			return (nodes);
		}
		ahead = ahead->next;
		here = (here->next)->next;
	}
	return (0);
}
