#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main
 * @argc: param1
 * @argv: param2
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int (*main)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	main = get_op_func(argv[2]);
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if (main == NULL || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", main(x, y));
	return (0);
}
