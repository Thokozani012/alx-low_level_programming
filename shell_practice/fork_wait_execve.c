#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * main - Executes the command 'ls - l /tmp' in 5 different child PID
 *
 * Return: Always 0.
 */

int main (void)
{
	pid_t child_pid;
	int num_kids = 5, i, status;

	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	char *envp[] = {NULL};

	for (i = 0; i < num_kids; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error: fork() failed\n");
			return (1);
		}

		if (child_pid == 0)
		{
			if (execve(argv[0], argv, envp) == -1)
			{
				perror("Error: execve failed\n");
				return (1);
			}
		}
		else
		{
			wait(&status);
		}
	}
	return (0);
}
