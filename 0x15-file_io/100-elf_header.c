#include "main.h"

#define MAGIC_NUMBER 0x457f454c46
#define ERROR_EXIT_CODE 98

void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(ERROR_EXIT_CODE);
}

void print_elf_header_info(Elf64_Ehdr *elf_header)
{
	printf("%-10s 0x%.8x\n", "Magic", elf_header->e_ident[EI_MAG0] << 24 | elf_header->e_ident[EI_MAG1] << 16 | elf_header->e_ident[EI_MAG2] << 8 | elf_header->e_ident[EI_MAG3]);
	printf("%-10s ", "Class");
	switch (elf_header->e_ident[EI_CLASS])
	{
		case ELFCLASS32: printf("ELF32\n"); break;
		case ELFCLASS64: printf("ELF64\n"); break;
		default: printf("Invalid\n"); break;
	}

	printf("%-10s ", "Data");
	switch (elf_header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
		case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
		default: printf("Invalid\n"); break;
	}

	printf("%-10s %d\n", "Version", elf_header->e_version);
	printf("%-10s %d\n", "OS/ABI", elf_header->e_ident[EI_OSABI]);
	printf("%-10s %d\n", "ABI Version", elf_header->e_ident[EI_ABIVERSION]);
	printf("%-10s 0x%.8x\n", "Type", elf_header->e_type);
	printf("%-10s 0x%.8lx\n", "Entry point address", elf_header->e_entry);
}

int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Error opening file");
	}

	/*Elf64_Ehdr elf_header;*/
	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		print_error("Error opening file");
	}

	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		print_error("Error reading file");
	}

	/*if (memcmp(elf_header.e_ident, MAGIC_NUMBER, EI_NIDENT) != 0)
	{
		print_error("Not an ELF file");
	}*/

	/*if (*(uint32_t*)&elf_header.e_ident != MAGIC_NUMBER)
	{
		print_error("Not an ELF file");
	}*/

	print_elf_header_info(&elf_header);

	close(fd);
	return (0);
}
