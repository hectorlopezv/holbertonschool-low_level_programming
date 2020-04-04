#ifndef HOLBETON_H
#define HOLBETON_H

#include <stddef.h>
#include <unistd.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif
