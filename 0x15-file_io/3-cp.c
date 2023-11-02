#include "main.h"
#define BUFSIZE 1024

int _close(int fd);

/**
 * main - takes 2 files, copy 1st one to 2nd one
 * @argc: number of inputs
 * @argv: array of input strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t read_result, write_result;
	char buffer[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((read_result = read(fd_from, buffer, BUFSIZE)))
	{
		if (read_result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			_close(fd_from);
			_close(fd_to);
			exit(98);
		}
		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1 || write_result != read_result)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			_close(fd_from);
			_close(fd_to);
			exit(99);
		}
	}
	if (_close(fd_from) == -1 || _close(fd_to) == -1)
		exit(100);
	return (0);
}
/**
 * _close - close the file
 * @fd: file that will be closed
 * Return: 0 on success -1 on fail
 */
int _close(int fd)
{
	if (close(fd) == 0)
		return (0);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (-1);
}
