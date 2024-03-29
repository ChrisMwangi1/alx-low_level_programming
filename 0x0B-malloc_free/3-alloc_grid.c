#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **m;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	m = malloc(sizeof(int *) * height);
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		m[a] = malloc(sizeof(int) * width);
		if (m[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(m[a]);
			free(m);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			m[a][b] = 0;
	}
	return (m);
}
