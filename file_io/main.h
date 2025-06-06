#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void print_error(int exit_code, const char *msg, const char *arg);
void copy_file(const char *file_from, const char *file_to);

#endif /* MAIN_H */
