#include "holberton.h"
/**
 * helper_close - main entry, close the file
 * @fd: file descriptor
 *
 */
void helper_close(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * helper_count - main entry, count the number of arguments
 * @ac: number of arguments
 *
 */
void helper_count(int ac)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * main - main entry, copy a file to another file
 * @ac: number of arguments
 * @av: the arguments
 *
 * Return: 1 on success or -1 on failure
 */
int main(int ac, char **av)
{
	int fd, fe, wr, rd;
	char buffer[1024];

	helper_count(ac);
	fd = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	fe = open(av[1], O_RDONLY);
	if (fe == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
		helper_close(fd);
		exit(98);
	}
	while ((rd = read(fe, buffer, 1024)))
	{
		if (rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", av[1]);
			helper_close(fe);
			helper_close(fd);
			exit(98);
		}
		wr = write(fd, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			helper_close(fd);
			helper_close(fe);
			exit(99);
		}
	}
	helper_close(fd);
	helper_close(fe);
	return (0);
}
