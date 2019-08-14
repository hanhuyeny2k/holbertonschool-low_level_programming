#include "holberton.h"
/**
 * main - main entry, copy a file to another file
 * @ac: number of arguments
 * @av: the arguments
 *
 * Return: 1 on success or -1 on failure
 */
int main(int ac, char **av)
{
	int fd, fe, cl;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	fe = open(av[1], O_RDWR);
	if (fe == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write from file %s\n", av[2]);
		exit(99);
	}
	while (read(fe, buffer, 1024))
	{
		write(fd, buffer, 1024);
	}
	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	cl = close(fe);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fe);
		exit(100);
	}
	return (0);
}
