#include "main.h"

/**
 * create_file - create file.
 * @filename: a filename.
 * @text_content: content written in the file.
 *
 * Return: -1 if it fails. 1 if it success.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int mletters;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (mletters = 0; text_content[mletters]; mletters++)
		;

	rwr = write(fd, text_content, mletters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
