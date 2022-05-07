#include "main.h"

/**
* _memset - reset memory to null
* @m: memory buffer
* @size: size of buffer
*/
void _memset(char *m, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		m[i] = '\0';
}
/**
* read_textfile - read text file
* @filename: file name  to be read
* @letters: number of chars to read
*
* Return: Number of letters read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i, r;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	_memset(buf, letters);
	r = read(fd, buf, letters);
	i = write(STDOUT_FILENO, buf, r);
	if (i == -1 || r == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (i);
}
