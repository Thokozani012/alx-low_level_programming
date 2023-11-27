#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(conts char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif /* MAIN_H */
