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
	ssize_t rd_from, wd;
	int file_from, file_to;
	mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perm);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((rd_from = read(file_from, buffer, sizeof(buffer))))
	{
		if (rd_from == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
		}
		wd = write(file_to, buffer, rd_from);
		if (wd == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from), exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to), exit(100);
	}
	return (0);
}
