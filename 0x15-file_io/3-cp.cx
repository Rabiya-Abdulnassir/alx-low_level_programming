#include "main.h"
/**
* closeFile - close file by file desc
* @fd: file descriptor
*/
void closeFile(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
* check_args -check args count
* @argc: arg count
*/
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
* main - entry point to program
* @argc: argumnet count
* @argv: args vector
* Return: 0 always
*/
int main(int argc, char **argv)
{
	ssize_t r, end, cur, w, len = 0;
	int fd, fdr;
	char *buf;

	check_args(argc);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cur = (off_t)lseek(fd, 0, SEEK_CUR);
	len = lseek(fd, 0, SEEK_END) - (ssize_t)cur;
	end = (off_t)lseek(fd, 0, SEEK_CUR);
	buf = malloc(sizeof(char) * 1024);
	lseek(fd, -len, SEEK_CUR);
	if (buf == NULL)
		return (-1);
	fdr = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (lseek(fd, 0, SEEK_CUR) != (ssize_t)end)
	{
		r = read(fd, buf, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		w = write(fdr, buf, r);
		if (w == -1 || fdr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
	}
	free(buf);
	closeFile(fd);
	closeFile(fdr);
	return (0);
}
