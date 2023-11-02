#include "main.h"

/**
 * _strlen - length of string
 * @ch: string
 * Return: length of string
*/

int _strlen(char *ch)
{
	int i = 0;

	while (ch[i] != '\0')
		i++;
	return (i);
}
/**
 * create_file - function that creates a file
 * @filename: file name
 * @text_content:  NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
**/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_result;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	write_result = write(fd, text_content, _strlen(text_content));
	if (write_result == -1)
		return (-1);

	return (1);
}
