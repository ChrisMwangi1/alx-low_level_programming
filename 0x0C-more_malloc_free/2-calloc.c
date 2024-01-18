#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: no. of memory blocks
 * @size: size of memory blocks
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	size_t y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(size * nmemb);
	if (x == NULL)
		return (NULL);

	for (y = 0; y < (size * nmemb); y++)
		x[y] = 0;
	return (x);
}
