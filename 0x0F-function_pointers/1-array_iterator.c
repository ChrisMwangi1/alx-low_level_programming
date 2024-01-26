#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter
 * on each element of an array.
 * @array: pointer
 * @size: size of array
 * @action: variable
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int x;

	if (!array || !action)
		return;

	for (x = 0; x < size; x++)
	{
		action(*array);
		array++;
	}
}
