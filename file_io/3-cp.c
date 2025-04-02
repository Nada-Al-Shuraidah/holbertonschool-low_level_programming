#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
* print_error - Prints an error message and exits with the given code.
* @exit_code: The exit code to use.
* @message: The error message format string.
* @arg: The argument to include in the message.
*/
void print_error(int exit_code, const char *message, const char *arg)
{
dprintf(STDERR_FILENO, message, arg);
exit(exit_code);
}

/**
* copy_file - Copies content from one file to another.
* @file_from: Source file
* @file_to: Destination file
*/
void copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

/* Open source file */
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
print_error(98, "Error: Can't read from file %s\n", file_from);

/* Open destination file */
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
print_error(99, "Error: Can't write to %s\n", file_to);

/* Read and write loop */
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
print_error(99, "Error: Can't write to %s\n", file_to);
}

if (bytes_read == -1)
print_error(98, "Error: Can't read from file %s\n", file_from);

/* Close file descriptors */
if (close(fd_from) == -1)
print_error(100, "Error: Can't close fd %d\n", file_from);
if (close(fd_to) == -1)
print_error(100, "Error: Can't close fd %d\n", file_to);
}

/**
* main - Entry point, copies one file to another.
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success, exits on failure.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
print_error(97, "Usage: cp file_from file_to\n", "");

copy_file(argv[1], argv[2]);
return (0);
}
