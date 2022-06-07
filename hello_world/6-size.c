#include <stdio.h>
/**
* main - Entry point
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;

/*sizeof evaluates the size of a variable*/
printf("Size of char: %d byte\n", sizeof(charType));
printf("Size of int: %d bytes\n", sizeof(intType));
printf("size of long int: %d bytes\n", sizeof(longType));
printf("Size of double: %d bytes\n", sizeof(doubleType));
printf("Size of float: %d bytes\n", sizeof(floatType));
return (0);
}
