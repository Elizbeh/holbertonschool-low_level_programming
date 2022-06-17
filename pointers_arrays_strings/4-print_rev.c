#include "main.h"

/**
 * print_rev - check the code
 * @s: param
 * Return: nothing.
*/

void print_rev(char *s)
{
	int m = 0;

	while (s[m] != '\0')
		m++;
	while (m > 0)
	{
		_putchar(s[m - 1]);
		m--;
	}
	_putchar('\n');
}
