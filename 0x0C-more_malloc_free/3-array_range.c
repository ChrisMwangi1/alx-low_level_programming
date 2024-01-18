#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int x, y;
	int *a;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	a = malloc(sizeof(int) * y);

	if (a == NULL)
		return (NULL);

	for (x = 0; x < y; x++)
	{
		a[x] = min;
		min++;
	}
	return (a);
}
