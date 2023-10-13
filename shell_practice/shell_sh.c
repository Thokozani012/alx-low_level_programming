#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * main - super simple shell
 *
 * Return: Always 0.
 */

int main(void)
{
	size_t len = 0;
	ssize_t nread;
	char *lineptr = NULL;

	while (1)
	{
	printf("#cisfun$ ");

	nread = getline(&lineptr, &len, stdin);
	if (nread == -1)
	{
		perror("Error: getline failed\n");
		return (1);
	}

	if (nread > 0 && lineptr[nread - 1] == '\n')
		lineptr[nread - 1] = '\0';

	/* To exit press "q" */
	if (strcmp(lineptr, "q") == 0)
		break;

	char *argv[] = {"/bin/sh", "-c", lineptr, NULL};
	char *envp[] = {NULL};
	int status;

	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error: failded to fork\n");
		return (1);
	}

	if (child_pid  == 0)
	{

		if (execve(argv[0], argv, envp) == -1)
		{
			perror("Error: execve failded to execute\n");
			return (1);
		}
	}
	else
	{
		wait(&status);
	}
	}
	free(lineptr);
	return (0);
}
