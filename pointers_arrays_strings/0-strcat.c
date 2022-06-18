#include "main.h"
#include <stdio.h>

/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: param 1
 * @src : param 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
