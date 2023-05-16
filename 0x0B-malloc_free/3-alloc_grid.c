#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Write a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: return a pointer to NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * height);

	if (m == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		m[x] = malloc(sizeof(int) * width);

		if (m[x] == NULL)
		{
			for (; x >= 0; x--)
				free(m[x]);

			free(m);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			m[x][y] = 0;
	}

	return (m);
}
