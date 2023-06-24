#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 *           with the constant byte c
 * @s: Pointer to the memory area
 * @c: The constant byte to fill the memory area with
 * @n: Number of bytes to fill
 *
 * Return: A pointer to the filled memory area (s)
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}

	return (s);
}
