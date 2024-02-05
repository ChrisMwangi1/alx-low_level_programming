#include "lists.h"

/**
 * free_listint_safe - A function that frees a linked listint_t list.
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int different;
	listint_t *tp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		different = *h - (*h)->next;
		if (different > 0)
		{
			tp = (*h)->next;
			free(*h);
			*h = tp;
			l++;
		}

		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;

	return (l);
}
