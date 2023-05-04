#include "main.h"

/**
 * _right_pbin_mask - recursion function to print bit 0 (act as a mask)
 * @n: type constant unsigned long integer
 */

void _right_pbin_mask(unsigned long int n)
{
	if (n == 0)
		return;
	_right_pbin_mask(n >> 1);
	_putchar((n & 1) + '0');

}

/**
 * print_binary - prints binary representation of a number
 * @n: type constant unsigned long integer
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		_right_pbin_mask(n);
}
