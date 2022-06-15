#include "main.h"

/**
  * more_numbers - Write a function that prints 10 times
  * the numbers, from 0 to 14, followed by a new line.
  * Return: void
 */

void more_numbers(void)
{
	int i;
	int g;

	for (i = 0; i <= 10; i++)
	{
		for (g = 0; g < 15; g++)
		{
			if  (g <= 10)
				_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
		}
		_putchar('\n');
	}
}
