#include <stdio.h>
#include <elf.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define ONE 1
#define BIT 31
#define OVERFLOW 0

#if (ONE << BIT) == OVERFLOW
#define ElfN_Addr Elf32_Addr
#define ElfN_Off Elf32_Off

#else
#define ElfN_Addr Elf64_Addr
#define ElfN_Off Elf64_Off
#endif

/**
 * struct ElfN_Ehdr - strucuture of the elf
 *
 * @e_ident: array of bytes specifies how to interpret the file
 * @e_type: identifies the object file type
 * @e_machine: specifies the required architecture
 * for an individual file.
 * @e_version: identifies the file version:
 * @e_entry: gives the virtual address to which the system first
 * transfers control, thus starting the process.
 * @e_phoff: holds the program header table's file offset in bytes
 * @shoff: holds the section header table's file offset in bytes
 * @flags:holds processor-specific flags associated with the file.
 * @e_ehsize: holds processor-specific flags associated with the file.
 * @phentsize: the size in bytes of one entry in the
 * file's program header table;
 * @phnum: holds the number of entries in the program header table
 * @shentsize: holds a sections header's size in bytes.
 * @shnum: holds the number of entries in the section header table.
 * @shstrndx: holds  the section header table index of the entry
 * associated with the section name string table
 * 
 */
typedef struct
{
	unsigned char e_ident[EI_NIDENT];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	ElfN_Addr e_entry;
	ElfN_Off e_phoff;
	ElfN_Off e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} ElfN_Ehdr;

/**
 * @check_file - checks if the file is one the elf
 * file format.
 *
 * @head: head of the file
 *
 * @Return: the description of the file type
 */
int check_File(ElfN_Ehdr head)
{

	switch (head.e_type)
	{
	case ET_NONE:
		return (1);
	case ET_REL:
		return (2);
	case ET_EXEC:
		return (3);
	case ET_DYN:
		return (4);
	case ET_CORE:
		return (5);
	default:
		return (0);
	}
}

/**
 * @print_header - prints the header info
 * of the elf file
 *
 * @head: the head of the elf file
 *
 * @Return: void
 */
void print_header(ElfN_Ehdr head)
{
	int i;

	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		if (i < 3)
			printf("%x ", head.e_ident[i]);
		else
			printf("0%x ", head.e_ident[i]);
	}
	printf("\n");

	if (head.e_ident[EI_CLASS] == 0x02)
		printf("  Class:                            ELF64\n");
	else
		printf("  Class:                            ELF32\n");
	if (head.e_ident[EI_DATA] == 0x02)
		printf("  Data:                             2's complement, big-endian\n");
	else
		printf("  Data:                             2's complement, little-endian\n");

	if (head.e_ident[6] == 0x01)
		printf("  Version:                          1 (current)\n");
	else
		printf("  Version:                          1 (current)\n");

	switch (head.e_ident[7])
	{
	case ELFOSABI_SYSV:
		printf("  OS/ABI:                           UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("  OS/ABI:                           HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("  OS/ABI:                           UNIX NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("  OS/ABI:                           Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("  OS/ABI:                           UNIX Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("  OS/ABI:                           IRIX \n");
		break;
	case ELFOSABI_FREEBSD:
		printf("  OS/ABI:                           FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("  OS/ABI:                           UNIX TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("  OS/ABI:                           ARM architecture\n");
		break;
	default:
		printf("\n");
		break;
	}

	printf("  ABI Version:                      %d\n", head.e_ident[8]);

	switch (head.e_type)
	{
	case ET_NONE:
		printf("  Type:                    An unknown type\n");
		break;
	case ET_REL:
		printf("  Type:                     A relocatable fil\n");
		break;
	case ET_EXEC:
		printf("  Type:                     EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("  Type:                    DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("  Type:                     A core file\n");
		break;
	default:
		break;
	}

	if (ONE << BIT)
		printf("  Entry point address:         0x%lux\n", head.e_entry);
	else
		printf("  Entry point address:         0x%lux\n", head.e_entry);
}

/**
 * @main - a program to read and print the header
 * of elf(executable and Linkable format) file
 *
 *@args: number of command line arguments
 *@argv: array of command line arguments
 *@Return int
 */

int main(int args, char **argv)
{
	int fd, is_elf;
	ElfN_Ehdr ehdr;

	if (args != 2)
	{
		printf("Usage: %s\n", argv[0]);
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		printf("Unable to open the file\n");
		exit(98);
	}
	read(fd, &ehdr, sizeof(ehdr));

	is_elf = check_File(ehdr);

	if (is_elf == 0)
	{
		printf("Unkown file format: \n");
		exit(99);
	}
	else
		print_header(ehdr);
    close(fd);

	return (0);
}
