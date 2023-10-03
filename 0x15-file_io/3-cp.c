#include <stdio.h>
#include "main.h"

/**
 * main - Copies of a file to another file
 * @argc: Argument counter
 * @argv: argument vector
 *
 * Return: 0 On Success, or exit code 97-100 on error
 */

int main(int argc, char *argv[])
{
	ssize_t file_from, file_to, rd_from, wd;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error Can't open file %s\n", argv[1]), exit(98);
	}

	while ((rd_from = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (file_to == -1)
		{
			dprintf(2, "Error: Can't open file %s\n", argv[2]), exit(99);
		}

		wd = write(file_to, buffer, rd_from);
		if (wd == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (rd_from == -1)
	{
		dprintf(2, "Error: Can't read file %s\n", argv[1]), exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %ld\n", file_from), exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %ld\n", file_to), exit(100);
	}
	return (0);
}
