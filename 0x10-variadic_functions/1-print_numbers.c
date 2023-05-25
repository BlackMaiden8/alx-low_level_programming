#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list fig;
	unsigned int h;

	va_start(fig, n);

	for (h = 0; h < n; h++)
	{
		printf("%d", va_arg(fig, int));

		if (h != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(fig);
}
