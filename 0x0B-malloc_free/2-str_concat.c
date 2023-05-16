#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *hstr;
	int i, dr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = dr = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[dr] != '\0')
		dr++;
	hstr = malloc(sizeof(char) * (i + dr + 1));

	if (hstr == NULL)
		return (NULL);
	i = dr = 0;
	while (s1[i] != '\0')
	{
		hstr[i] = s1[i];
		i++;
	}

	while (s2[dr] != '\0')
	{
		hstr[i] = s2[dr];
		i++, dr++;
	}
	hstr[i] = '\0';
	return (hstr);
}
