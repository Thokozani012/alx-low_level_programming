#include <stdio.h>
#include <elf.h>
#include "main.h"

/**
 * main - Displays the information contained in the ELF header
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: On success 0.
 */

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[1]), exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]), exit(98);
	}

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		dprintf(2, "ERROR: Can't read ELF header from file %s\n", argv[1]), exit(98);
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(2, "Error: Not an ELF file file: %s\n", argv[1]);
		exit(98);
	}

	printf("ELF Header: ");
	printf("Magic: %02x %02x %02x %02x\n",
			elf_header.e_ident[EI_MAG0],
			elf_header.e_ident[EI_MAG1],
			elf_header.e_ident[EI_MAG2],
			elf_header.e_ident[EI_MAG3]);
	printf("Class:					%s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:					%s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:				%d (current)\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI:					%d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version:				%d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type:					%d\n", elf_header.e_type);
	printf("Entry point address:			0x%lx\n", (unsigned long)elf_header.e_entry);

	close(fd);
	return(0);
}
