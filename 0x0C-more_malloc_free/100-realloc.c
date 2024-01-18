#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: initial size of memory
 * @new_size: new size of memory
 * Return: pointer to new size of memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t x;
	char *ptr1;
	char *old = ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		return (ptr1);
	}

	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			ptr1[x] = old[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			ptr1[x] = old[x];
	}

	free(ptr);
	return (ptr1);
}
