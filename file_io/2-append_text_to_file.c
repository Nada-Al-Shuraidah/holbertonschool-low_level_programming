#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
* append_text_to_file - Appends text at the end of a file
* @filename: Name of the file
* @text_content: NULL-terminated string to add at the end of the file
*
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written, len = 0;

if (!filename)
return (-1);

/* Open file in append mode */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

/* If text_content is NULL, nothing to append; just return success */
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
