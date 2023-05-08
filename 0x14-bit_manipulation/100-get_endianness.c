#include "main.h"
/**
 * get_endianness - sets the value of a bit to one at a given index
 * Return: one if little endian zero if big endian
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *l = (char *)&t;

	if (*l)
		return (1);
	return (0);
}
