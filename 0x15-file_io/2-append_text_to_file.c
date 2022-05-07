#include "main.h"
/**
* append_text_to_file - append text to end of file
* @filename: file to append to its end
* @text_content: text to be appended
*
* Return: 1 if success else -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t size  = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		size = 0;
	else
	{
		while (text_content[size])
			size++;
	}
	w = write(fd, text_content, size);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
