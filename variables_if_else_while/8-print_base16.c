include <stdio.h>

/**
  * main -Entry point
  * Return 0 (Sucess)
  */
int main(void)
{
	unsigned char a;
	int b;

	putchar('Enter value of a: ');
	putchar('%x',&a);

	putchar('Enter value of b: ');

	scanf('%x',&b);
							
	putchar('Value of a: Hex: %X, Decimal: %d\n',a,a);

	putchar('Value of b: Hex: %X, Decimal: %d\n',b,b);
						
	return 0;

