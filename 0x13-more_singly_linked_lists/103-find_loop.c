#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in listint_t.
 * @head: linked list to search for
 * Return: address of the node where the loop starts, NULL (Fail)
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a = head;
	listint_t *b = head;

	if (head == NULL)
		return (NULL);

	while (a && b && b->next)
	{
		b = b->next->next;
		a = a->next;

		if (b == a)
		{
			a = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (b);
		}
	}
	return (NULL);
}
