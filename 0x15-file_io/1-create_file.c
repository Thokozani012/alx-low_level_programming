#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - Creates a file
 * @filename: name of the file to be created
 * @text_content: Content to be inputed into the new file
 *
 * Return: 1 on Success, or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fptr, wr, size = 0;

	if (!filename)
		return (-1);

	fptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fptr < 0)
		return (-1);
	while (text_content[size] != '\0')
	{
		size++;
	}
	
	wr = write(fptr, text_content, size);
	if (wr < 0)
	{
		return (-1);
	}
	close(fptr);
	return (1);
}
