#include "main.h"

/**
  * display_error - handles the error messages
  * @message: error message to be displayed on the stderr
  *
  * Return: Nothing (void function)
  */
void display_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
  * display_elf_header - displays the elf header file
  * @filename: displays the contents of elf_header
  *
  * Return: Nothing (void functions)
  */
void display_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	Elf64_Ehdr elf_header;

	if (fd == -1)
	{
		display_error("Failed to open the file");
	}

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		display_error("Failed to read the ELF header");
	}

	/*Check if it's a valid ELF file*/
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 || elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		display_error("Not a Valid ELF file");
	}

	/*Display the required information*/
	printf("Magic: %02x %02x %02x %02x\n", elf_header.e_ident[EI_MAG0], elf_header.e_ident[EI_MAG1], elf_header.e_ident[EI_MAG2], elf_header.e_ident[EI_MAG3]);
	printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
	printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: %lx\n", elf_header.e_entry);

	close(fd);
}

/**
  * main - displays information contained in the ELF header
  * @argc: argument counter
  * @argv: argument vector
  *
  * Return: Always 0 on success, or exit code 98 on failure.
  */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	display_elf_header(argv[1]);

	return (0);
}
