#include "holberton.h"
/**
 * read_textfile - main entry, read the text
 * @filename: name of a file
 * @letters: number of letters pass through this function
 *
 * Return: the number of letter is printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int wr;
	char *buf;
	int rd;

	buf = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);
	close(fd);
	return (wr);
}

