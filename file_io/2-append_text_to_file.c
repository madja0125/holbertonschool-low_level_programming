#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append to
 * @text_content: text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		if (write(fd, text_content, len) != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
