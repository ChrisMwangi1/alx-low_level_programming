#include "lists.h"

/**
 * sum_listint - A function that calculates the sum
 * of all the data in a listint_t list
 * @head: first node in the linked listint_t list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *tp = head;

	while (tp)
	{
		s += tp->n;
		tp = tp->next;
	}

	return (s);
}
