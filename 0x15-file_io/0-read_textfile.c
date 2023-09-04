#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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
	FILE *fptr;
	ssize_t bRead, bWrittern;
	char *buffer;

	if (filename == NULL)
		return (0);

	fptr = fopen(filename, "r");
	if (fptr == NULL)
	{
		fclose(fptr);
		return (0);
	}

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		fclose(fptr);
		return (0);
	}

	bRead = fread(buffer, sizeof(char), letters, fptr);
	if (bRead <= 0)
	{
		fclose(fptr);
		return (0);
	}
	buffer[bRead] = '\0';

	bWrittern = write(STDOUT_FILENO, buffer, bRead);
	fclose(fptr);

	if (bWrittern == bRead)
	{
		return (bWrittern);
	}
	else
	{
		return (0);
	}
}
