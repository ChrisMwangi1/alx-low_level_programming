#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the node at the nth index
 * in a linked listint_t list.
 * @head: first node in listint_t
 * @index: index of the node to return
 * Return: pointer to the nth node, NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tp = head;

	while (tp && x < index)
	{
		tp = tp->next;
		x++;
	}

	return (tp ? tp : NULL);
}
