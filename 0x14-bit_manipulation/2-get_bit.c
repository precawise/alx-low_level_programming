#include "main.h"

/**
 * get_bit - return value of a bit in a given index
 * @n: type the unsigned long integer input
 * @index: type unsigned int position of unit
 * Return: value of bit in an index or -1 if occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 65)
		return (-1);
	return ((n >> index) & 1);
}
