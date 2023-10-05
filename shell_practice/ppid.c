#include <stdio.h>
#include <unistd.h>

/**
 * main - gets prarent process (ppid)
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t p_pid;

	p_pid = getppid();
	printf("%u\n", p_pid);

	return (0);
}
