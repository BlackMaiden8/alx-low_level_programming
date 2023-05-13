#include <stdio.h>
#include "main.h"

/**
 * main - prints name of the program, followed by a new line.
 * If program is renamed, it will print the new name
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;

	return(0);
}
