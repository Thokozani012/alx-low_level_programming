#include "main.h"

/**
  * create_file - Creates a file
  * @filename: Name of the file to be created
  * @text_content: Null terminated string to write to the file
  *
  * Return: On success 1, or -1 on error/failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, wd, len = 0, i;
	char *buffer;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		close(fd);
		return (1);
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[len] != '\0')
		len++;
	buffer = malloc(sizeof(char) * len + 1);
	if (buffer == NULL)
		return (-1);
	for (i = 0; i < len; i++)
		buffer[i] = text_content[i];
	buffer[len] = '\0';

	wd = write(fd, buffer, len);
	if (wd == -1)
	{
		free(buffer);
		close(fd);
		return (-1);
	}

	free(buffer);
	close(fd);
	return (1);
}
