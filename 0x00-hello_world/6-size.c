#include <stdio.h>
/**
 * main - print out sizes of datatypes in C
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %d byte(s)\n", sizeof(a));
	printf("Size of int: %d byte(s)\n", sizeof(b));
	printf("Size of long int: %d byte(s)\n", sizeof(c));
	printf("Size of long long int: %d byte(s)\n", sizeof(d));
	printf("Size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
