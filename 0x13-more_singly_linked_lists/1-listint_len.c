#include "lists.h"

/**
 * listint_len - A function that returns the no. of elements
 * in a linked listint_t list.
 * @h: linked list of type listint_t.
 *
 * Return: no. of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		no++;
		h = h->next;
	}
	return (no);
}

