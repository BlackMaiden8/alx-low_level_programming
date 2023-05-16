#include "main.h"
#include <stdlib.h>
/**
 * create_array - Write a function that creates an array of chars
 * initializes it with a specific char.
 * @size: size of array
 * @c: char to assign array with
 *
 * Return: NULL if it fails, poniter to array
 */
char *create_array(unsigned int size, char c)
{
	char *ray;
	unsigned int i;

	ray = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}

	/*check if malloc was sucessful*/

	if (ray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ray[i] = c;
	return (ray);
}
