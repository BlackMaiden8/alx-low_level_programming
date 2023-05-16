#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string
 * @str: pointer to string being duplicated 
 *
 * Return: pointer to the duplicated string, NULL if str is NULL
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *hstr;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	hstr = malloc(sizeof(char) * (i + 1));

	if (hstr == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		hstr[j] = str[j];

	return (hstr);
}
