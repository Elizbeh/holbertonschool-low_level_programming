#include "main.h"

/**
 * main - void print_alphabet_x10(void);
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch = 'a';

	for ( ; ch <= 'z'; ++ch)
	{
		_putchar(ch);
		_putchar('\n')
	}
	return (0);
}
