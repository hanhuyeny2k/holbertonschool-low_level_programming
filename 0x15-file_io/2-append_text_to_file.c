#include "holberton.h"
/**
 * append_text_to_file - main entry, appends text at the end of a file
 * @filename: name of a file
 * @text_content: pointer to the string
 *
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i] != '\0'; i++)
	{}
	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
