#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
* open_file - Opens a file in read-only mode
* @filename: Name of the file to open
*
* Return: File descriptor on success, -1 on failure
*/
int open_file(const char *filename)
{
if (!filename)
return (-1);
return (open(filename, O_RDONLY));
}

/**
* allocate_buffer - Allocates memory for reading file content
* @size: Size of the buffer to allocate
*
* Return: Pointer to allocated buffer, or NULL on failure
*/
char *allocate_buffer(size_t size)
{
return (malloc(sizeof(char) * size));
}

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
* @filename: Name of the file to read
* @letters: Number of letters to read and print
*
* Return: Actual number of letters read and printed, or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buffer;

/* Open file */
fd = open_file(filename);
if (fd == -1)
return (0);

/* Allocate buffer */
buffer = allocate_buffer(letters);
if (!buffer)
{
close(fd);
return (0);
}

/* Read from file */
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}

/* Write to stdout */
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
free(buffer);
close(fd);

if (bytes_written == -1 || bytes_written != bytes_read)
return (0);

return (bytes_written);
}
