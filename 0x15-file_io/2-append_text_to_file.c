#include "main.h"


/**
 * append_text_to_file -  a function that appends text at the end of a file.
 *
 * @filename:  is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (len = 0; *(text_content + len) != '\0'; len++)
		;
	if (write(fd, text_content, len) < 0)
		return (-1);
	return (1);
}
