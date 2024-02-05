#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node
 * in a linked listint_t, at a given position
 * @head: pointer to the first node in the listint_t
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL (Fail)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new_node;
	listint_t *tp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (x = 0; tp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new_node->next = tp->next;
			tp->next = new_node;
			return (new_node);
		}
		else
			tp = tp->next;
	}
	return (NULL);
}
