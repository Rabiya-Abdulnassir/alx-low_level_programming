#include <elf.h>
#include "main.h"
void print_TYPE(uint16_t type, unsigned char *e_id);
void print_header(unsigned char *e_id);
void print_OSABI(unsigned char c);
void check_elf(unsigned char *e_id);
void print_CLASS(unsigned char c);
void print_version(unsigned char c);
void print_DATA(unsigned char c);
void print_entry(unsigned long int ent, unsigned char *e_id);
/**
* main - entry point
* @argc: number of argumnets
* @argv: args vector
* Return: 0 is success else -1
*/
int main(int __attribute__((unused)) argc, char **argv)
{
	int fd, c;
	ssize_t r;
	char *buf;
	unsigned char *e_id;
	Elf64_Ehdr *hdr;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can not open file %s\n", argv[1]);
		exit(98);
	}
	buf = malloc(sizeof(Elf64_Ehdr));
	if (buf == NULL)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: can not read file %s\n", argv[1]);
		exit(98);
	}
	r = read(fd, buf, sizeof(Elf64_Ehdr) / sizeof(char));
	if (r == -1)
	{
		free(buf);
		close(fd);
		dprintf(STDERR_FILENO, "Error: reading file%s\n", argv[1]);
		exit(98);
	}
	hdr = (Elf64_Ehdr *)buf;
	e_id = (unsigned char *)buf;
	check_elf(e_id);
	print_header(e_id);
	print_CLASS(e_id[EI_CLASS]);
	print_DATA(e_id[EI_DATA]);
	print_version(e_id[EI_VERSION]);
	print_OSABI(e_id[EI_OSABI]);
	printf("  ABI Version:                       %u\n", e_id[EI_ABIVERSION]);
	print_TYPE(hdr->e_type, e_id);
	print_entry(hdr->e_entry, e_id);
	c = close(fd);
	if (c == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Closing file %d", fd);
		exit(98);
	}
	free(buf);
	return (0);
}
/**
* print_entry -print entry point
* @ent: entry point
* @e_id: e_id
*/
void print_entry(unsigned long int ent, unsigned char *e_id)
{
	unsigned long int A, B, C;

	if (e_id[EI_DATA] == ELFDATA2MSB)
	{
		A = ent;
		B = 0xFF000000;
		B = B & A;
		B = B >> 24;
		A = A << 8;
		C = 0xFF000000;
		C = C & A;
		C = C >> 16;
		B = B | C;
		A = A << 8;
		C = 0xFF000000;
		C = C & A;
		C = C >> 8;
		B = C | B;
		A = A << 8;
		ent = A | B;
		printf("  Entry point address:               %#lx\n", ent);
	}
	else
	{
		printf("  Entry point address:               %#lx\n", ent);
	}
}
/**
* print_TYPE - print type of file
* @type: type indicator
* @e_id: e_id
*/
void print_TYPE(uint16_t type, unsigned char *e_id)
{
	if (e_id[EI_DATA] == ELFDATA2MSB)
		type = type >> 8;
	printf("  Type:                              ");
	switch (type)
	{
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		default:
			printf("<unknown: %x>\n", type);
			break;
	}
}
/**
* print_header - prints header
* @e_id: pointer to header
*/
void print_header(unsigned char *e_id)
{

	printf("ELF Header:\n");
	printf("  Magic:   ");
	printf("%02x ", e_id[EI_MAG0]);
	printf("%02x ", e_id[EI_MAG1]);
	printf("%02x ", e_id[EI_MAG2]);
	printf("%02x ", e_id[EI_MAG3]);
	printf("%02x ", e_id[EI_CLASS]);
	printf("%02x ", e_id[EI_DATA]);
	printf("%02x ", e_id[EI_VERSION]);
	printf("%02x ", e_id[EI_OSABI]);
	printf("%02x ", e_id[EI_ABIVERSION]);
	printf("%02x ", e_id[EI_PAD]);
	printf("%02x ", e_id[EI_PAD]);
	printf("%02x ", e_id[EI_PAD]);
	printf("%02x ", e_id[EI_PAD]);
	printf("%02x ", e_id[EI_PAD]);
	printf("%02x ", e_id[EI_PAD]);
	printf("%02x\n", e_id[EI_PAD]);
}
/**
* print_CLASS - print class
* @c: char for class
*/
void print_CLASS(unsigned char c)
{
	printf("  Class:                             ");

	if (c == ELFCLASS32)
		printf("ELF32\n");
	else if (c == ELFCLASS64)
		printf("ELF64\n");
	else if (c == ELFCLASSNONE)
		printf("none\n");
	else
		printf("<unknown: %x>\n", c);
}
/**
* print_DATA- prints data
* @c: data
*/
void print_DATA(unsigned char c)
{
	printf("  Data:                              ");
	if (c == ELFDATA2LSB)
		printf("Two's complement, little-endian\n");
	else if (c == ELFDATA2MSB)
		printf("Two's complement, big-endian\n");
	else if (c == ELFDATANONE)
		printf("none\n");
	else
		printf("unknown: %x>\n", c);
}
/**
* print_version - print version
* @c: version number
*/
void print_version(unsigned char c)
{
	printf("  Version:                           %u", c);
	if (c == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}
/**
* print_OSABI - print OSABI
* @c: OSABI num
*/
void print_OSABI(unsigned char c)
{
	printf("  OS/ABI:                            ");
	switch (c)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNXI - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", c);
			break;
	}
}
/**
* check_elf - chek if file is elf
* @e_id: buffer of file
*/
void check_elf(unsigned char *e_id)
{
	if (!(e_id[EI_MAG0] == 0x7f && e_id[EI_MAG1] == 'E' &&
		e_id[EI_MAG2] == 'L' && e_id[EI_MAG3] == 'F'))
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}
