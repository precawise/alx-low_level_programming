#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s which consists
 *           entirely of bytes from accept.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s which consist
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_accept = 1;

	while (*s && is_accept)
	{
		char *a = accept;

		is_accept = 0;

		while (*a)
		{
			if (*a == *s)
			{
				count++;
				is_accept = 1;
				break;
			}

			a++;
		}

		s++;
	}

	return (count);
}
