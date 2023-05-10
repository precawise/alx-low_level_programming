#include "main.h"
#include <stdio.h>

/**
 * error_file - check to see if files can be open.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vectors.
 * Return: return none.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write o %d\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies contents of a file to another file.
 * @argc: Number of arguments supplied to program.
 * @argv: Array of pointers to arguments.
 *
 * Return: 0 success.
 *
 * Description: If argument count is incorrect - exit 97.
 * If file_from does not exist,cannot be read - exit 98.
 * If file_to cannot be created, written to - exit 99.
 * If file_to or file_from cannot be closed - exit 100.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			errror_file(-1, 0, argv);
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_from);
	if (er_close == -1)
	{
		dprinf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

