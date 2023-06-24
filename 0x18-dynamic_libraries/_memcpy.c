#include "main.h"

/**
 * _memcpy - Copies n bytes from the memory area src to the memory area dest.
 * @dest: The pointer to the destination memory area.
 * @src: The pointer to the source memory area.
 * @n: The number of bytes to be copied.
 *
 * Return: The pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
