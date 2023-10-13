#include <stdio.h>
#include "shell.h"

/**
 * main - prints addressess of env and environ
 * @argc: argument counter
 * @argv: argument vector
 * @envp: environment variable
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[], char *envp[])
{
	extern char **environ;
	printf("Address of env (parameter of main()): %p\n", (void *)envp);
	printf("Address of environ (global variable): %p\n", (void *)environ);

	if (envp == environ)
		printf("same!\n");
	else
		printf("not the same!\n");

	return (0);
}
