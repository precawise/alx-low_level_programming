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

	printf("Size of char: %lu bytes\n", sizeof(a));
	printf("Size of int: %lu bytes\n", sizeof(b));
	printf("Size of long int: %lu bytes\n", sizeof(c));
	printf("Size of long long int: %lu bytes\n", sizeof(d));
	printf("Size of float: %lu bytes\n", sizeof(f));
	return (0);
}
