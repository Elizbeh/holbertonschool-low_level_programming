#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Engtry point
 *
 *Return: Always 0 (Sucess)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
