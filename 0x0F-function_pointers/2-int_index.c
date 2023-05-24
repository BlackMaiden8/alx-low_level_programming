#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer.
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: returns the index of the first element
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (r = 0; r < size; r++)
	{
		if (cmp(array[r]))
			return (r);
	}
	return (-1);
}
