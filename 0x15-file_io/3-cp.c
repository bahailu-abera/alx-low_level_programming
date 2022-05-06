#include "main.h"
#include <string.h>

#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif


/**
 * close_file - closes both opened files
 *
 * @numRead: the return value of read syscall
 * @inputFd: fd for input file
 * @outputFd: fd for out[ut file
 * @file_from: file to be read from
 *
 * Return: void
 */

void close_file(ssize_t numRead, int inputFd, int outputFd, char *file_from)
{

	if (numRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				file_from), exit(98);
	}
	if ((close(inputFd) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", inputFd);
		exit(100);

	}
	if ((close(outputFd) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", inputFd);
		exit(100);
	}
}


/**
 * copy_file - copies file_from to file_to
 *
 * @file_from: the file to be copied from
 * @file_to: the file to be copied to
 *
 * Return: void
 */

void copy_file(char *file_from, char *file_to)
{
	int inputFd, outputFd, openFlags;
	mode_t filePerms;
	ssize_t numRead;
	char buffer[BUF_SIZE];

	inputFd = open(file_from, O_RDONLY);

	if (inputFd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				file_from);
		exit(98);
	}

	openFlags = O_CREAT | O_WRONLY | O_TRUNC;
	filePerms = (S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH);
	umask(0);

	outputFd = open(file_to, openFlags, filePerms);

	if (outputFd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	/* read and write data until we encounter end of file */
	while ((numRead = read(inputFd, buffer, BUF_SIZE)) > 0)
	{
		if (write(outputFd, buffer, numRead) != numRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	close_file(numRead, inputFd, outputFd, file_from);
}


/**
 * main - a function to copy buffer from the first argument
 * file name to the second argumwnt filename
 *
 * @args: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0
 */

int main(int args, char **argv)
{
	if (args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from, file_to\n");
		exit(97);
	}

	if (strcmp(argv[1], argv[2]) == 0)
		return (0);
	copy_file(argv[1], argv[2]);

	return (0);
}
