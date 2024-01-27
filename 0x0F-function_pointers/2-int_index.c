#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * @array: array with int
 * @size: size of array
 * @cmp: function pointer
 * Return: -1 if size is less or equal to 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (!array || !cmp)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
