#include "main.h"

/**
 * binary_to_uint - it convert a binary into an unsigned integer
 * @b: it type const char pointer of 1 bit
 * Return: converted number, or 0 if 1 or more char in str b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int net = 0;

	if (b == NULL)
		return (0);
	while (*(b + n) != '\0')
	{
		if (*(b + n) != '0' && *(b + n) != '1')
			return (0);
		net <<= 1;
		if (*(b + n) == '1')
			net ^= 1;
		n++;
	}
	return (net);

}
