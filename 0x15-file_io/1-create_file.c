#include "main.h"
#define OPEN_FAIL -1

/**
 * create_file - a function that creates a file
 *
 * @filename: the name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == OPEN_FAIL)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (len = 0; *(text_content + len) != '\0'; len++)
		;

	if (write(fd, text_content, len) == -1)
		return (-1);
	return (1);
}
