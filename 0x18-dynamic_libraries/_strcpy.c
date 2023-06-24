#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_copy = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_copy);
}
