#include "main.h"

void print_error_exit(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

void display_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error_exit("Error opening file");
	}

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error_exit("Error reading ELF header");
	}

	/* check ELF magic number */
	if (memcmp(header.e_ident, "\x7f""ELF", 4) != 0)
	{
		print_error_exit("Not an ELF file");
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < 16; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n Class:				%s\n", (header.e_ident[4] == 1) ? "ELF32" : "ELF64");
