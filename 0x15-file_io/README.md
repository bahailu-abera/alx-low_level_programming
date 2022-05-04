# File input Output using c and linux syscall

In this repo we see how to create, open, read, and write files

### Important terminology

what is File Descriptor?
	File Descriptor is integer that uniquely identifies an open file of the process.
what is file Descriptor table?
	File descriptor table is the collection of integr array indices that are file descriptors in which elements are pointers to file table entries.
what is table entry ?
	File table entry is a structure in memory surrogate for an open file, which is created when process request to open file and these entries maintains file position.

### Standard File Decriptors:
	when any process starts, then that process file descriptors
	tables-s fd (file descriptor) 0, 1, 2 open automatically,
	(by default) each of these 3 fd references file table entry for a file named /dev/tty.

### /dev/tty/:
	In-memory surrogate for the terminal

### Read from stdinv (fd = 0):
	Whenerver we write any character from the keyboard, it read from stdin through fd 0 and save to file named /dev/tty.

### Write to stdout (fd = 1):
	Whenever we see any output to the video screen, it's from the file named /dev/tty/ and written to stdout in screen through fd 1.

### Write to stderr(fd = 2): 
	we see any error to the video screen, it also from that file
	write to stderr in screen through fd 2.

### I/O system calls
1. Create: used to create a new empty file.
	- prototype is: int create(char *filename, mode_t mode)
	filename: name of the file which you want to create
	mode: indicates permissions of new file.

	returns: 
		- return first unused file descriptor (generrally 3  when first
		create use in process beacause 0, 1, 2 fd are reserved.
		- return -1 when error occured.
	##### How it works on Os
		- Create a new empty file on the disk.
		- create a file table entry 
		- set first unused file descriptor to point to file entry.
		- Return file descriptor used, -1 upon failure.
2. open: used to open the file for reading, writing or both.
	# Syntax in c language\n
	#include <sys/types.h>\n
	#include <sys/stat.h>\n
	#include <fcntl.h>\n
	int open (const char * path, int flags [, int mode ]);\n

	- Path: path to file which you want to use 
		- use absolute path begin with “/”, when you are not work in same directory of file.
		- Use relative path which is only file name with extension, when you are work in same directory of file.
	- flags : How you like to use
		- O_RDONLY: read only.
		- O_WRONLY: write only.
		- O_RDWR: read and write.
		- O_CREAT: create file if it doesn’t exist.
		- O_EXCL: prevent creation if it already exists.
	###### How it works in OS
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

	##### How it works in the OS
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


_____________________________________________________________________________________________________________________________________
## What is the Difference Between System Call and Function Call ?

The main difference between system call and function call is system call is a request made by a program  to the kernal 
to access specific resource and function call is a request made by a program to perform a specific task.
	- System calls are used when a program needs to communicate with the kernel.
	- function calls are used to call a specific function within the program.

### what is system call ?
**Note:**
   computer operate in two modes of operation one **Kernal mode** and the other is **user mode**.
   - **Kernal Mode:** Is a privileged  mode that allows  programs to access  memory and any other hardware directly.
   - **User Mode:** the programs cannot directly access memory and hardware resources.
   	When a program needs memory or a resource, it communicates with the kernel via a system call.
\nIn other words a **system call** is a request sent to the kernal by other programs to access resource.
Then the mode changes from user mode to kernal mode. Afer completing the task the modeswitches back to the user mode. We call this mode transition as **context switching.**
### What is Function Call  ?
**A function call is a call that passes control to a function.**

A function is a set of statements that performs a specific task. Rather than writing all the statements inside the main function, the programmer can call the functions as required. Syntax of a function is as follows.

return_type function_name(parameter list){

            //statements inside the function
	    }
###### system call is a function provided by the kernel to enter kernel mode to access a resource while a function call is a request made by a program or script that execute a predetermined function. Thus, this is the main difference between system call and function call.

###### Also, another difference between system call and function call is the [context switching](https://en.wikipedia.org/wiki/Context_switch). Context switching occurs in system calls; however, there is no context switching occurrence in function calls.

###### System calls allow the program to access memory or a hardware resource from the kernel while function calls help to pass the control to a specific function and to execute the defined task. Hence, this is the functional difference between system call and function call.





