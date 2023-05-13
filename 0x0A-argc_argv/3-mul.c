#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * Your program should print the result of the multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success);
 */
int main(int argc, char *argv[])
{
	int index, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (index = 1; index < argc; index++)
	{
		multiplication = multiplication * atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}
