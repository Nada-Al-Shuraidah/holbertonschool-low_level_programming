#include "main.h"

/**
* print_error - Print error message to stderr and exit with given code
* @exit_code: code to exit with
* @msg: message format string
* @arg: argument to include in message
*/
void print_error(int exit_code, const char *msg, const char *arg)
{
dprintf(STDERR_FILENO, msg, arg);
exit(exit_code);
}

/**
* close_fd - Close a file descriptor and handle error
* @fd: file descriptor
*/
void close_fd(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
* copy_file - Copy contents of one file to another
* @file_from: source file name
* @file_to: destination file name
*/
void copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to, r, w;
char buffer[1024];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
print_error(98, "Error: Can't read from file %s\n", file_from);

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
close_fd(fd_from);
print_error(99, "Error: Can't write to %s\n", file_to);
}

while ((r = read(fd_from, buffer, 1024)) > 0)
{
w = write(fd_to, buffer, r);
if (w != r)
{
close_fd(fd_from);
close_fd(fd_to);
print_error(99, "Error: Can't write to %s\n", file_to);
}
}
if (r == -1)
{
close_fd(fd_from);
close_fd(fd_to);
print_error(98, "Error: Can't read from file %s\n", file_from);
}

close_fd(fd_from);
close_fd(fd_to);
}

/**
* main - Entry point. Handles arguments and calls copy_file.
* @argc: argument count
* @argv: argument vector
* Return: 0 on success
*/
int main(int argc, char **argv)
{
if (argc != 3)
print_error(97, "Usage: cp file_from file_to\n", "");

copy_file(argv[1], argv[2]);
return (0);
}
