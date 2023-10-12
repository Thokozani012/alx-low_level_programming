#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

char **str_split(const char *str, const char *delimiter, int *count);

#endif /*_SHELL_H_*/
