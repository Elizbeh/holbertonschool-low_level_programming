#include "main.h"

/**
 * swap_int - check the code
 * @a: strings
 * @b: strings
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
