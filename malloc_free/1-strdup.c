#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - main prototype
 * @str: string
 * Return: str
 */

char *_strdup(char *str)
{
	int b = 0;
	int d = 0;
	char *cpy;

	if (str == 0)
		return (NULL);
	while (str[b] != '\0')
	{
		b++;
	}
	cpy = malloc((b + 1) * sizeof(char));
	if (cpy == 0)
		return (NULL);
	for (d = 0; d <= b; d++)
	{
		cpy[d] = str[d];
	}
	return (cpy);
}
