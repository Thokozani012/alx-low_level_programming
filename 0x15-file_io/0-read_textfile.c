#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints to the POSIX standard output
 * @filename: File to be read and its content be printed
 * @letters: Number of letters/chars that should be read and printed
 *
 * Return: On success, the number of chars read. or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fptr;
	int bRead, bWrittern;
	char *buffer;

	if (filename == NULL || !letters)
		return (0);

	fptr = open(filename, O_RDONLY);
	if (fptr < 0)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		return (0);
	}

	bRead = read(fptr, buffer, letters);
	if (bRead < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[bRead] = '\0';

	bWrittern = write(STDOUT_FILENO, buffer, bRead);
	free(buffer);
	close(fptr);

	if (bWrittern == bRead)
	{
		return (bWrittern);
	}
	else
	{
		return (0);
	}
}
