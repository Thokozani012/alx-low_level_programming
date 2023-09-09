#include "main.h"
#include <stdio.h>

/**
 * main - Copies content of a file to another file
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: on success 0.
 */

int main(int argc, char *argv[])
{
	int fd_s, fd_d, bRead, bWrittern;
	char buffer[BUFFER_ZONE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	fd_s = open(argv[1], O_RDONLY);
	if (fd_s == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd_d == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]), exit(99);
	}

	while ((bRead = read(fd_s, buffer, sizeof(buffer))) > 0)
	{
		bWrittern = write(fd_d, buffer, bRead);
		if (bWrittern != bRead || bWrittern == -1)
			dprintf(2, "Error: Can't write to file %s\n", argv[2]), exit(99);
	}

	if (bRead == -1)
		dprintf(2, "Error: Can't close file %s\n", argv[1]), exit(98);

	if (close(fd_s) == -1)
		dprintf(2, "Error: Can't close file %d\n", fd_s), exit(100);
	if (close(fd_d) == -1)
		dprintf(2, "Error: Can't close file %d\n", fd_d), exit(100);

	return (0);
}
