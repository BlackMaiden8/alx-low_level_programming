#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Write a function that allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *nsr;

	nsr = malloc(b);

	if (nsr == NULL)
		exit(98);

	return (nsr);
}
