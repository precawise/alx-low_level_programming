#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: the character to be written
 *
 * Return: On success, returns the number of characters written.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
