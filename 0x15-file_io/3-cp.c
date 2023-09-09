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
	int file_from, file_to, bRead, bWrittern;
	char buffer[BUFFER_SIZE];
	/*mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;*/

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);

	bRead = 1;
	while (bRead)
	{
		bRead = read(file_from, buffer, BUFFER_SIZE);
		if (bRead == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (bRead > 0)
		{
			bWrittern = write(file_to, buffer, bRead);
			if (bWrittern != bRead || bWrittern == -1)
				dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}

	if (close(file_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
