#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to concatenate from src
 *
 * Return: Pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest)
		dest++;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest_start);
}
