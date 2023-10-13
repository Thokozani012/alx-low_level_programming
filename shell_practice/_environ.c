#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints environment using global variable 'environ'
 *
 * Return: Always 0.
 */
extern char **environ; /*i would include this on shell.h*/
int main(void)
{
	char **env = environ;

	while (env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
	return (0);
}
