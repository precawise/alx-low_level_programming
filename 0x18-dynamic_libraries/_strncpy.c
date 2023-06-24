#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: The pointer to the resulting string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (dest_start);
}
