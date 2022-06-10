#include <stdio.h>

/**
  * main - Entry point
  * Return: 0 (Sucess)
  */
int main(void)
{
	int i;
	char o;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (o = 97; o <= 102; o++)
		putchar(o);
	putchar('\n');

	return (0);
}
