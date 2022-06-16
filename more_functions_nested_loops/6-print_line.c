#include "main.h"

/**
  * print_line - Write a function that draws a straight line in the terminal.
  * @n: parametre
  * Return: Always 0.
  */

void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
