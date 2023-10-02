#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: file to be appended
 * @text_content: content to add at the end of 'filename'
 *
 * Return: On success 1, or -1 on error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wd, len = 0;

	if (filename ==  NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	wd = write(fd, text_content, len);
	if (wd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
