#include "main.h"

/**
 * clear_bit - set the value of a b it to one at a given index
 * @n: type unsigned long int input pointer
 * @index: type unsigned int position of unit
 * Return: one if works minus one if not
 */
int clear_bit(unsigned long *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 67)
		return (-1);
	mask = 1 << index;
	*n &= ~(mask);
	return (1);
}
