#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message to stderr and exits.
 * @exit_code: The exit code to use.
 * @message: The error message to print.
 * @filename: The name of the file related to the error.
 */
void print_error_and_exit(int exit_code, const char *message,
const char *filename)
{
dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
exit(exit_code);
}

/**
 * copy_file - Copies content from one file to another.
 * @from_fd: File descriptor of source file.
 * @to_fd: File descriptor of destination file.
 * @file_from: Source file name.
 * @file_to: Destination file name.
 */
void copy_file(int from_fd, int to_fd, const char *file_from,
const char *file_to)
{
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(to_fd, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(from_fd);
close(to_fd);
print_error_and_exit(99, "Can't write to", file_to);
}
}

if (bytes_read == -1)
{
close(from_fd);
close(to_fd);
print_error_and_exit(98, "Can't read from file", file_from);
}
}


/**
 * main - Copies the content of one file to another.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, exits with 97-100 on failure.
 */
int main(int argc, char *argv[])
{
int from_fd, to_fd;

if (argc != 3)
print_error_and_exit(97, "Usage: cp file_from file_to", "");

from_fd = open(argv[1], O_RDONLY);
if (from_fd == -1)
print_error_and_exit(98, "Can't read from file", argv[1]);

to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (to_fd == -1)
{
close(from_fd);
print_error_and_exit(99, "Can't write to", argv[2]);
}

copy_file(from_fd, to_fd, argv[1], argv[2]);
if (close(from_fd) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd), exit(100);
if (close(to_fd) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd), exit(100);

return (0);
}
