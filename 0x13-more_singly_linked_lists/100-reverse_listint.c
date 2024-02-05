#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: pointer to the first node in the listint_t
 * Return: pointer to the first node in the new listint_t
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *nt = NULL;

	while (*head)
	{
		nt = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = nt;
	}

	*head = p;

	return (*head);
}
