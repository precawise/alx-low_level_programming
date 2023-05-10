#include "main.h"

/**
 * read_textfile - read a text file and print it to the POSIX standard output
 * @filename: type char filename.
 * @letters: type size_t letters printed.
 *
 * Return: number of printed letters. If fails, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, 0_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
