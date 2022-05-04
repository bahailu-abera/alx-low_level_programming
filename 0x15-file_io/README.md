# File input Output using c and linux syscall

In this repo we see how to create, open, read, and write files

# Important terminology

what is File Descriptor?
       File Descriptor is integer that uniquely identifies an 
       open file of the process.
what is file Descriptor table?
	File descriptor table is the collection of integr array indices that are file descriptors in which elements are pointers to file table entries.

what is table entry ?
	File table entry is a structure in memory surrogate for an open file, which is created when process request to open file and these entries maintains file position.

# Standard File Decriptors:
	when any process starts, then that process file descriptors
	tables-s fd (file descriptor) 0, 1, 2 open automatically,
	(by default) each of these 3 fd references file table entry for a file named /dev/tty.

# /dev/tty/:
	In-memory surrogate for the terminal

# Read from stdinv (fd = 0):
	Whenerver we write any character from the keyboard, it read from stdin through fd 0 and save to file named /dev/tty.

# Write to stdout (fd = 1):
	Whenever we see any output to the video screen, it's from the file named /dev/tty/ and written to stdout in screen through fd 1.

# Write to stderr(fd = 2): 
	we see any error to the video screen, it also from that file
	write to stderr in screen through fd 2.

# I/O system calls
1. Create: used to create a new empty file.
	- prototype is: int create(char *filename, mode_t mode)
	filename: name of the file which you want to create
	mode: indicates permissions of new file.

	returns: 
		- return first unused file descriptor (generrally 3  when first
		create use in process beacause 0, 1, 2 fd are reserved.
		- return -1 when error occured.
	# How it works on Os
		- Create a new empty file on the disk.
		- create a file table entry 
		- set first unused file descriptor to point to file entry.
		- Return file descriptor used, -1 upon failure.
2. open: used to open the file for reading, writing or both.
	# Syntax in c language
	\#include <sys/types.h>
	\#include <sys/stat.h>
	\#include <fcntl.h>
	int open (const char * path, int flags [, int mode ]);

	- Path: path to file which you want to use 
		- use absolute path begin with “/”, when you are not work in same directory of file.
		- Use relative path which is only file name with extension, when you are work in same directory of file.
	- flags : How you like to use
		- O_RDONLY: read only.
		- O_WRONLY: write only.
		- O_RDWR: read and write.
		- O_CREAT: create file if it doesn’t exist.
		- O_EXCL: prevent creation if it already exists.
	# How it works in OS
		- Find the existing file on disk
		- Create file table entry
		- Set first unused file descriptor to point to file table entry
		- Return file descriptor used, -1 upon failure
3. Close: Tells the operating system you are done with a file descriptor and Close the file which pointed by fd. 
	# Syntax in C language
	#include <fcntl.h>
	int close(int fd);
	fd: file descriptor.

	Return:
		- 0 on success.
		- -1 0n error.

	# How it works in the OS
		- Destroy file table entry referenced by element fd of file descriptor table
		- Set element fd of file descriptor table to NULL


## Function description of the files for the repository is here below.

| file     |     Description                                        |
|--------  | -------------------------------------------------------|
| 0-read_textfile.c | a function that reads a text file and prints it to the POSIX standard output. |
| 1-create_file.c |  a function that creates a file. |
| 2-append_text_to_file.c | a function that appends text at the end of a file.|
| 3-cp.c | a program that copies the content of a file to another file.|
| 100-elf_header.c | a program that displays the information contained in the ELF header at the start of an ELF file.|

