#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
* create_file - Creates a file with specific permissions and writes content
* @filename: Name of the file to create
* @text_content: NULL-terminated string to write into the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd, bytes_written, len = 0;

if (!filename)
return (-1);

/*Open file:O_CREAT (create),O_WRONLY (write),O_TRUNC(truncate existing file)*/
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

/* If text_content is not NULL, write it to the file */
if (text_content)
{
while (text_content[len])
len++;

bytes_written = write(fd, text_content, len);
if (bytes_written == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
