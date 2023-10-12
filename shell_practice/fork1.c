#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - fork identifying child PID
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t my_pid;
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	my_pid = getpid(); /*initialize my_pid */
	printf("My pid is %u\n", my_pid);
	if (child_pid == 0)
	{
		printf("(%u) Nooooo!, you're a child\n", my_pid);
	}
	else
	{
		printf("(%u) %u, I am your father\n", my_pid, child_pid);
	}
	return (0);
}
