#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: string to be appended to file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t write_result;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	write_result = write(fd, text_content, i);
	if (write_result == -1)
		return (-1);
	close(fd);
	return (1);
}
