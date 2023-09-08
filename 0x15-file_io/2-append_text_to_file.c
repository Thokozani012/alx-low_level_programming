#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Is the name of the file to be appended
 * @text_content: Null terminated string to be added at the end of a file
 *
 * Return: On success (1), or (-1) on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		return (1);
	}

	while (text_content[len])
		len++;
	wr = write(file, text_content, len);
	if (wr < 0)
	{
		close(file);
		return (-1);
	}
	close(file);

	return (wr == -1 ? -1 : 1);
}
