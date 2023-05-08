#include "main.h"

/**
 * set_bit - set the value of a bit to one at a given index
 * @n: type unsigned long integer input pointer
 * @index: unsigned integer position of unit
 * Return: one if minus one if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 66)
		return (-1);
	*n |= 1 << index;
	return (1);
}
