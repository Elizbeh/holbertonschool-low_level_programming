#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
*Return: Always 0 (Sucess)
 */
int main(void)
{
	int r;

	for (r = 0; r < 10; r++)
		putchar('%d', r);
	putchar('\n');

	return (0);
