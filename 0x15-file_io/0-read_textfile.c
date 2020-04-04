#include "holberton.h"

/**
 *read_textfile - read_textfile
 *@filename: name of the file in the actual directory
 *@letters: numbers of chars to read
 *Return: return the number of char read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, c_total;
	char *c;

	c_total = 0;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	c = malloc(sizeof(char) * letters);

	c_total = read(fd, c, letters);
	if (c_total == 0 || c_total == -1)
	{
		return (0);
	}

	c[c_total] = 0;

	write(1, c, c_total);

	free(c);
	close(fd);

	return (c_total);

}
