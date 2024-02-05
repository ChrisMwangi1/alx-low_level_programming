#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node
 * in a linked listint_t list at a certain index.
 * @head: pointer to the first element in listint_t
 * @index: index of the node to delete
 * Return: 1 (Success), -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tp = *head;
	listint_t *curt = NULL;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tp);
		return (1);
	}

	while (x < index - 1)
	{
		if (!tp || !(tp->next))
			return (-1);
		tp = tp->next;
		x++;
	}

	curt = tp->next;
	tp->next = curt->next;
	free(curt);

	return (1);
}
