#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: number of letters should read and print
 * Return: actual number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_write;
	char *buffer;
	int file_descriptor;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		return (0);
	}
	close(file_descriptor);

	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_write == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	close(file_descriptor);
	free(buffer);
	return (bytes_write);
}
