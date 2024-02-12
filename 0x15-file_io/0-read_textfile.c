#include "main.h"

/**
  * read_textfile - reads a textfile and print it's content to the POSIX stdout
  * @filename: textfile to be read
  * @letters: number of characters/letters to be read and printed
  *
  * Return: The number of writtern letters/characters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wd;
	int fd;
	char *buffer;

	if (filename == NULL || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);

	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[rd] = '\0';

	wd = write(STDOUT_FILENO, buffer, rd);
	if (wd == -1 || wd != rd)
	{
		free(buffee);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (wd);
}
