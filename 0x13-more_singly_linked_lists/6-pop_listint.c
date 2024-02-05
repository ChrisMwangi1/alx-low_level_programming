#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a linked list
 * @head: pointer to the first element in the linked listint_t list
 * Return: the head node's data, 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int no;

	if (!head || !*head)
		return (0);

	no = (*head)->n;
	tp = (*head)->next;
	free(*head);
	*head = tp;

	return (no);
}
