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
	if (!text_content)
	{
		fptr = open(filename, O_WRONLY | O_CREAT, 0600);
		close(fptr);
	}
	else
	{
		fptr = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
		if (fptr < 0)
			return (-1);
		while (text_content[size] != '\0')
		{
			size++;
		}
		wr = write(fptr, text_content, size);
		if (wr < 0)
		{
			close(fptr);
			return (-1);
		}
		close(fptr);
	}
	return (1);
}
