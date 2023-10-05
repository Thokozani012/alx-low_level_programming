#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

#define MAX_PROC_PATH 256

int main(void)
{
	FILE *fp;
	char buffer[MAX_PROC_PATH];
	pid_t max_pid = 0, pid;
	int fd;

	for (pid = 1; ; pid++)
	{
		snprintf(buffer, sizeof(buffer), "/proc/%d/status", pid);
		fd = open(buffer, O_RDONLY);
		if (fd == -1)
			break;
		if ((fp = fdopen(fd, "r")) == NULL)
			break;
		fclose(fp);
		max_pid = pid;
	}
	printf("Maximum PID value on this system: %u\n", (unsigned int)max_pid);

	return (0);
}
