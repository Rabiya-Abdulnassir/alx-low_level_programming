#include "main.h"
/**
* create_file - create file
* @filename: file name to be created
* @text_content: text to be written on the file
*
* Return: 1 if success else -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	size_t index = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
	{
		index = 0;
	}
	else
	{
		while (text_content[index])
			index++;
	}
	w = write(fd, text_content, index);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
