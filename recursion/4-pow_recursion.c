#include "main.h"

/**
  * _pow_recursion - main funtion
  * @x: para 1
  * @y: para 2
  * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y <= 1)
	{
		return (1);
	}
	return (x * _pow_recursion(y, x - 1));
}
