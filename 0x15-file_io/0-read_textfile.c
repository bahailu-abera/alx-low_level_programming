#include "main.h"
#define OPER_FAIL -1

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the name of the file.
 * @letters: is the number of letters it should read and print
 *
 * Return: actual number of letter it reads
 * and prints to the stdout.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_read;
	int fd_open;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd_open = open(filename, O_RDONLY);

	if (fd_open == OPER_FAIL)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd_open);
		return (0);
	}

	num_read = read(fd_open, buffer, letters);
	if (num_read == -1)
	{
		close(fd_open);
		return (0);
	}
	buffer[num_read] = '\0';
	letters = (size_t)num_read;
	if (write(STDOUT_FILENO, buffer, letters) != num_read)
	{
		free(buffer);
		close(fd_open);
		return (0);
	}

	close(fd_open);
	free(buffer);
	return (num_read);
}
