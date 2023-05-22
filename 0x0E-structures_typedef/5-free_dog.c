#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Write a function that frees dogs
 * @d: struct dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
