#include "lists.h"
#include <stdio.h>
/**
 * print_listint - A function that prints all the elements of a linked list
 * @h: linked list to print of type listint_t
 * Return: no. of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		printf("%d\n", h->n);
		no++;
		h = h->next;
	}
	return (no);
}
