#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: text file to be read
 * @letters: number of characters/letters to reada and print
 *
 * Return: The number of writern letters/characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wd;
	char *fd;
	char *buffer;

	if (filename == NULL || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}

	wd = write(STDOUT_FILENO, buffer, rd);
	if (wd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	if (wd != rd)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	return (wd);
}
